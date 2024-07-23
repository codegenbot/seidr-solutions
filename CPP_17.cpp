vector<int> parse_music(string music_string){
    vector<int> result;
    int length = music_string.length();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o' && (i == length - 1 || music_string[i + 1] != '|')) {
            result.push_back(4);
        } else if (music_string[i] == 'o|') {
            result.push_back(2);
            ++i;
        } else if (music_string[i] == ".|") {
            result.push_back(1);
            ++i;
        }
    }
    return result;
}