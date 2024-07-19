vector<int> parse_music(string music_string){
    vector<int> beats;
    int beat = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            beats.push_back(beat);
            beat = 0;
        } else if (c == '.') {
            beat++;
        }
    }
    if (beat > 0) {
        beats.push_back(beat);
    }
    return beats;
}