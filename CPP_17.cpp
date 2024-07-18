vector<int> parse_music(string music_string){
    vector<int> result;
    int length = music_string.length();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            result.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                result.back() = 2;
            } else {
                result.back() = 1;
            }
        }
    }
    return result;
}