vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == 'o') {
            if (!note.empty()) {
                if (note == "o") {
                    beats.push_back(4);
                } else if (note == "o|") {
                    beats.push_back(2);
                }
                note.clear();
            }
            note = "o";
        } else if (c == '|') {
            if (!note.empty()) {
                if (note == "o") {
                    beats.push_back(4);
                } else if (note == "o|") {
                    beats.push_back(2);
                }
                note.clear();
            }
        } else if (c == '.') {
            if (!note.empty()) {
                if (note == "o") {
                    beats.push_back(4);
                } else if (note == "o|") {
                    beats.push_back(2);
                }
                note.clear();
            }
            note = ".|";
        }
    }
    if (!note.empty()) {
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        }
    }
    return beats;
}