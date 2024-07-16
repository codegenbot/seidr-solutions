vector<int> parse_music(string music_string){
    vector<int> beats;
    int duration = 0;
    
    for (char note : music_string) {
        if (note == 'o') {
            duration = 4;
            beats.push_back(duration);
        } else if (note == '|') {
            beats.push_back(duration / 2);
        } else if (note == '.') {
            beats.push_back(duration / 4);
        }
    }
    
    return beats;
}