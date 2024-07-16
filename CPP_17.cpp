vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "o") {
                beats.push_back(4);
            } else if (note == "o|") {
                beats.push_back(2);
            }
            note = "o";
        } else if (c == '.') {
            if (note == ".|") {
                beats.push_back(1);
            }
            note = ".";
        } else if (c == '|') {
            if (note == "o") {
                beats.push_back(4);
            } else if (note == ".") {
                beats.push_back(1);
            }
            note = "|";
        }
    }
    if (note == "o") {
        beats.push_back(4);
    } else if (note == "o|") {
        beats.push_back(2);
    } else if (note == ".|") {
        beats.push_back(1);
    }
    return beats;
}