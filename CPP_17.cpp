vector<int> parse_music(string music_string){
    vector<int> beats;
    int len = music_string.length();
    for (int i = 0; i < len; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i - 1] == 'o') {
            beats.back() = 2;
        } else if (music_string[i] == '|' && music_string[i - 1] == '.') {
            beats.back() = 1;
        }
    }
    return beats;
}