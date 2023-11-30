vector<int> parse_music(string music_string) {
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; i += 2) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == ' ') {
            i++;
        } else {
            beats.push_back(1);
        }
    }
    return beats;
}