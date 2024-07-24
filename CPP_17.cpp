vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_length = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(4);
        } else if (note == '|') {
            if (note_length == 1) {
                beats.push_back(1);
            } else if (note_length == 2) {
                beats.push_back(2);
            }
            note_length = 0;
        } else if (note == '.') {
            note_length = 1;
        }
    }
    if (note_length == 1) {
        beats.push_back(1);
    } else if (note_length == 2) {
        beats.push_back(2);
    }
    return beats;
}