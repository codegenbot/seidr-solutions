bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size())
        return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<int> parse_music(string music_string);

int main() {
    // Main function code here
    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_duration = 0;
    
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(note_duration + 1);
            note_duration = 3;
        } else if (c == '|') {
            beats.push_back(note_duration + 1);
            note_duration = 1;
        } else if (c == '.') {
            beats.push_back(note_duration + 1);
            note_duration = 0;
        }
    }
    
    beats.push_back(note_duration + 1);
    
    return beats;
}