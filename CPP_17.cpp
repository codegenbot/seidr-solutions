vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            if (note == "o") {
                beats.back() = 2;
            } else if (note == ".") {
                beats.back() = 1;
            }
            note = "";
        } else {
            note += c;
        }
    }
    if (!note.empty()) {
        if (note == "o") {
            beats.push_back(4);
        } else if (note == ".") {
            beats.push_back(1);
        }
    }
    return beats;
}