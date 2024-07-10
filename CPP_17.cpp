vector<int> parse_music(string music_string){
    vector<int> beats;
    int beat_count = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(4);
            beat_count = 4;
        } else if (note == '|') {
            beats.push_back(beat_count / 2);
            beat_count = beat_count / 2;
        } else if (note == '.') {
            beats.push_back(1);
            beat_count = 1;
        }
    }
    return beats;
}