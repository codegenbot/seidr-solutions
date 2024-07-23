vector<int> parse_music(string music_string){
    vector<int> beats;
    int current_beat = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(4);
            current_beat = 4;
        } else if (note == '|') {
            if (current_beat == 4) {
                beats.back() = 2;
                current_beat = 2;
            } else {
                beats.push_back(1);
                current_beat = 1;
            }
        }
    }
    return beats;
}