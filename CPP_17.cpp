vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note == "o") {
                beats.push_back(4);
            } else {
                note = "o";
            }
        } else if (music_string[i] == '|') {
            if (note == "o") {
                beats.push_back(2);
            } else {
                beats.push_back(1);
            }
            note = "";
        }
    }
    return beats;
}