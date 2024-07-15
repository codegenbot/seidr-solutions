vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "o") {
                beats.push_back(4);
            } else {
                note = "o";
            }
        } else if (c == '|') {
            if (note == "o") {
                beats.push_back(2);
            } else if (note == ".") {
                beats.push_back(1);
            }
            note = "";
        } else if (c == '.') {
            note = ".";
        }
    }
    return beats;
}