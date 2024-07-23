vector<int> parse_music(string music_string){
    vector<int> beats;
    int duration = 0;
    for (char c : music_string) {
        if (c == 'o') {
            duration = 4;
        } else if (c == '|') {
            beats.push_back(duration);
            duration = 0;
        } else if (c == '.') {
            duration = 1;
        }
    }
    if (duration > 0) {
        beats.push_back(duration);
    }
    return beats;
}