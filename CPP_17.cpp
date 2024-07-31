vector<int> parse_music(string music_string){ 
    vector<int> beats;
    int note_length = 0;
    for (char c : music_string) {
        if (c == 'o') {
            note_length = 4;
        } else if (c == '|') {
            beats.push_back(note_length);
            note_length = 0;
        } else if (c == '.') {
            note_length = 1;
        }
    }
    if (note_length != 0) {
        beats.push_back(note_length);
    }
    return beats;
}