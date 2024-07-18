vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_length = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(note_length == 0 ? 4 : 2);
            note_length = 0;
        } else if (note == '|') {
            beats.push_back(note_length == 0 ? 2 : 1);
            note_length = 0;
        } else if (note == '.') {
            beats.push_back(1);
            note_length = 0;
        } else {
            note_length++;
        }
    }
    if (note_length > 0) {
        beats.push_back(note_length == 1 ? 1 : 2);
    }
    return beats;
}