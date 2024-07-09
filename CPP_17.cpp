vector<int> parse_music(string music_string){ 
    vector<int> beats;
    int count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            count++;
            if (count % 2 == 0) {
                beats.push_back(2);
            } else {
                beats.push_back(1);
            }
        }
    }
    return beats;
}