vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note == "") {
                note = "o";
            } else {
                note += "o";
                beats.push_back(note.length() * 2);
                note = "";
            }
        } else if (music_string[i] == '|') {
            if (note == "") {
                beats.push_back(4);
            } else {
                beats.push_back(note.length());
                note = "";
            }
        } else if (music_string[i] == '.') {
            if (note == "") {
                beats.push_back(1);
            } else {
                beats.push_back(note.length() / 2);
                note = "";
            }
        }
    }
    if (note != "") {
        beats.push_back(note.length());
    }
    return beats;
}