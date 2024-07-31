bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_length = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(note_length == 0 ? 4 : 2);
            note_length = 0;
        } else if (c == '|') {
            beats.push_back(note_length == 0 ? 2 : 1);
            note_length = 0;
        } else if (c == '.') {
            note_length++;
        }
    }
    if (note_length > 0) {
        beats.push_back(note_length);
    }
    return beats;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
}