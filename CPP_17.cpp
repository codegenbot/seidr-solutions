vector<int> parse_music(string music_string){
    vector<int> beats;
    int count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|' && count == 0) {
            beats.push_back(2);
            count++;
        } else if (c == '|' && count == 1) {
            beats.push_back(1);
            count = 0;
        }
    }
    return beats;
}