vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string.substr(i, 2) == "o|") {
            beats.push_back(2);
            ++i;
        } else if (music_string.substr(i, 2) == ".|") {
            beats.push_back(1);
            ++i;
        }
    }
    return beats;
}