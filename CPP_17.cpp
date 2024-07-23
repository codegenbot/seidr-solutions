vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (!note.empty()) {
                beats.push_back(note == "o|" ? 2 : 1);
            }
            note = "o";
        } else if (c == '.') {
            if (note.empty()) {
                note = ".";
            } else {
                beats.push_back(note == ".|" ? 1 : 1);
                note = "";
            }
        } else if (c == '|') {
            if (note == "o") {
                beats.push_back(4);
                note = "";
            } else if (note == ".") {
                beats.push_back(1);
                note = "";
            }
        }
    }

    if (!note.empty()) {
        beats.push_back(note == "o|" ? 2 : 1);
    }

    return beats;
}