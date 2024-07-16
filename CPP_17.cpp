vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            note += c;
            if (note == "o") {
                beats.push_back(4);
                note = "";
            }
        } else if (c == '|' && !note.empty()) {
            note += c;
            if (note == "o|") {
                beats.push_back(2);
                note = "";
            }
        } else if (c == '.' && !note.empty()) {
            note += c;
            if (note == ".|") {
                beats.push_back(1);
                note = "";
            }
        }
    }
    return beats;
}