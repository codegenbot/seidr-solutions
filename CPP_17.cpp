vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_duration = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(note_duration + 1);
            note_duration = 0;
        } else if (c == '|') {
            beats.push_back(note_duration + 1);
            note_duration = 0;
        } else if (c == '.') {
            note_duration++;
        }
    }
    beats.push_back(note_duration + 1);
    return beats;
}