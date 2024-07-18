vector<int> parse_music(string music_string){ 
    vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == 'o') {
            if (!note.empty()) {
                if (note == "o|") {
                    beats.push_back(2);
                } else if (note == ".|") {
                    beats.push_back(1);
                }
                note.clear();
            }
            note = "o";
        } else {
            note += c;
        }
    }
    if (note == "o|") {
        beats.push_back(2);
    } else if (note == ".|") {
        beats.push_back(1);
    }
    return beats;
}