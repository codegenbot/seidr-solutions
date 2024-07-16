vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_duration = 0;
    for (char c : music_string) {
        if (c == 'o') {
            note_duration = 4;
        } else if (c == '|') {
            beats.push_back(note_duration);
            note_duration = 0;
        } else if (c == '.') {
            note_duration = 1;
        }
    }
    if (note_duration > 0) {
        beats.push_back(note_duration);
    }
    return beats;
}