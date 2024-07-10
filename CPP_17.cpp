vector<int> parse_music(string music_string){
    vector<int> beats;
    int duration = 0;
    for (char c : music_string) {
        if (c == 'o') {
            duration = 4;
            beats.push_back(duration);
        }
        else if (c == '|') {
            beats.push_back(duration / 2);
        }
        else if (c == '.') {
            beats.push_back(duration / 4);
        }
    }
    return beats;
}