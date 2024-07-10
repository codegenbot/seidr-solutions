vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "o|") {
                beats.push_back(2);
            } else {
                beats.push_back(4);
            }
            note = "";
        } else if (c == '.') {
            if (note == ".|") {
                beats.push_back(1);
            }
            note = "";
        } else {
            note += c;
        }
    }
    return beats;
}