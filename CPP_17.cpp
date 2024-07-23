vector<int> parse_music(string music_string){
    vector<int> durations;
    for (int i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            durations.push_back(4);
        } else if (music_string[i] == '|' && music_string[i-1] == 'o') {
            durations.back() = 2;
        } else if (music_string[i] == '|' && music_string[i-1] == '.') {
            durations.back() = 1;
        }
    }
    return durations;
}