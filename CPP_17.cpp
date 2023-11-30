vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    for (char c : music_string) {
        note += c;
        if (note == "o ") {
            beats.push_back(4);
            note = "";
        } else if (note == "o| ") {
            beats.push_back(2);
            note = "";
        } else if (note == ".| ") {
            beats.push_back(1);
            note = "";
        }
    }
    return beats;
}