bool issame(string s1, string s2) {
    return s1 == s2;
}

vector<int> parse_music(string music_string);

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (issame(note, "o|")) {
                beats.push_back(2);
            } else if (issame(note, ".|")) {
                beats.push_back(1);
            } else {
                beats.push_back(4);
            }
            note = "";
        } else {
            note += c;
        }
    }
    if (!note.empty()) {
        if (issame(note, "o|")) {
            beats.push_back(2);
        } else if (issame(note, ".|")) {
            beats.push_back(1);
        }
    }
    return beats;
}