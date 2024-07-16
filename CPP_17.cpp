vector<int> parse_music(string music_string){
    vector<int> beats;
    int duration = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(duration + 1);
            duration = 0;
        } else if (note == '|') {
            beats.push_back(duration);
            duration = 0;
        } else if (note == '.') {
            duration++;
        }
    }
    if (duration > 0) {
        beats.push_back(duration);
    }
    return beats;
}