vector<int> parse_music(string music_string){
    vector<int> result;
    for (size_t i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            if (i + 1 < music_string.size() && music_string[i + 1] == '|') {
                result.push_back(2);
                ++i;
            } else {
                result.push_back(4);
            }
        } else if (music_string[i] == '.') {
            result.push_back(1);
            ++i;
        }
    }
    return result;
}