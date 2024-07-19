vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    for (int i = 0; i < music_string.length(); ++i) {
        if (music_string[i] == 'o') {
            if (i + 1 < music_string.length() && music_string[i + 1] == '|') {
                beats.push_back(2);
                ++i;
            } else {
                beats.push_back(4);
            }
        } else if (music_string[i] == '.') {
            beats.push_back(1);
            ++i;
        }
    }
    return beats;
}