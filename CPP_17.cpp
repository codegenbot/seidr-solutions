vector<int> parse_music(string music_string){
    vector<int> beats;
    int count = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(4);
        } else if (note == '|') {
            beats.push_back(count);
            count = 0;
        } else if (note == '.') {
            count++;
        }
    }
    if (count > 0) {
        beats.push_back(count);
    }
    return beats;
}