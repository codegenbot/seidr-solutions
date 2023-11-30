vector<int> parse_music(string music_string) {
    vector<int> beats;
    int length = music_string.length();
    int i = 0;
    while (i < length) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i += 2;
        } else if (music_string[i] == '.') {
            beats.push_back(1);
            i += 2;
        } else {
            beats.push_back(2);
            i += 3;
        }
    }
    return beats;
}