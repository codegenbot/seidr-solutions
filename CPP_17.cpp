vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (music_string[i + 1] == ' ') {
                beats.push_back(4);
            } else if (music_string[i + 1] == '|') {
                beats.push_back(2);
            }
        } else if (music_string[i] == '.') {
            if (music_string[i + 1] == '|') {
                beats.push_back(1);
            }
        }
    }
    return beats;
}