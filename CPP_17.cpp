vector<int> parse_music(string music_string){
    vector<int> beats;
    int beat_count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
            beat_count = 0;
        } else if (c == '|') {
            if (beat_count == 0) {
                beats.push_back(2);
            } else {
                beats.push_back(1);
            }
            beat_count++;
        }
    }
    return beats;
}