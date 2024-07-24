vector<int> parse_music(string music_string){
    vector<int> beats;
    size_t pos = 0;
    while ((pos = music_string.find("o", pos)) != string::npos) {
        if ((pos + 1) < music_string.size() && music_string[pos + 1] == '|') {
            beats.push_back(2);
            pos += 2;
        } else {
            beats.push_back(4);
            pos += 1;
        }
    }

    size_t pos_dot = 0;
    while ((pos_dot = music_string.find(".|", pos_dot)) != string::npos) {
        beats.push_back(1);
        pos_dot += 2;
    }

    return beats;
}