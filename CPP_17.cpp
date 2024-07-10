bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> parse_music(string music_string);

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            if (i + 1 < music_string.size() && music_string[i + 1] == '|') {
                beats.push_back(2);
                i += 2;
            } else {
                beats.push_back(4);
                i++;
            }
        } else if (music_string[i] == '.') {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}