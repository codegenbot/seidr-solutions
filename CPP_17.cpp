vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note.length() > 0) {
                beats.push_back(note.length());
                note = "";
            }
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (note.length() > 0) {
                beats.push_back(note.length());
                note = "";
            }
            if (music_string[i - 1] == 'o') {
                beats.push_back(2);
            } else {
                beats.push_back(1);
            }
        } else if (music_string[i] == '.') {
            if (note.length() > 0) {
                beats.push_back(note.length());
                note = "";
            }
            beats.push_back(1);
        } else {
            note += music_string[i];
        }
    }
    if (note.length() > 0) {
        beats.push_back(note.length());
    }
    return beats;
}