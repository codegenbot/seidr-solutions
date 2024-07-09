vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_duration = 0;
    
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(4);
            note_duration = 4;
        } else if (note == '|') {
            if (note_duration == 4) {
                beats.back() = 2;
                note_duration = 2;
            } else {
                beats.back() = 1;
                note_duration = 1;
            }
        }
    }
    
    return beats;
}