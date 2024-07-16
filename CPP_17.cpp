vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (!note.empty()) {
                beats.push_back(note == "o|" ? 2 : 1);
                note = "";
            }
            note += "o";
        } else if (c == '.') {
            if (!note.empty()) {
                beats.push_back(note == "o|" ? 2 : 1);
                note = "";
            }
            note += ".";
        } else if (c == '|') {
            note += "|";
        }
    }
    if (!note.empty()) {
        beats.push_back(note == "o|" ? 2 : 1);
    }
    return beats;
}