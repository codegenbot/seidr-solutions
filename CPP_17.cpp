vector<int> parse_music(string music_string){
    vector<int> beats;
    int count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            beats.push_back(count);
            count = 0;
        } else if (c == '.') {
            count++;
        }
    }
    beats.push_back(count);
    return beats;
}