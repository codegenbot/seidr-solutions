vector<int> parse_music(string music_string){
    vector<int> beats;
    size_t pos = 0;
    while ((pos = music_string.find("o", pos)) != string::npos) {
        beats.push_back(4);
        pos++;
    }
    pos = 0;
    while ((pos = music_string.find("o|", pos)) != string::npos) {
        beats.push_back(2);
        pos += 2;
    }
    pos = 0;
    while ((pos = music_string.find(".|", pos)) != string::npos) {
        beats.push_back(1);
        pos += 2;
    }
    return beats;
}