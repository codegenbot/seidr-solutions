vector<int> parse_music(string music_string){
    vector<int> beats;
    int count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            if (count == 1) {
                beats.push_back(2);
            } else {
                beats.push_back(1);
            }
            count = 0;
        } else if (c == '.') {
            beats.push_back(1);
        } else {
            count++;
        }
    }
    return beats;
}