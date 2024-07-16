vector<int> parse_music(string music_string){
    vector<int> notes_duration;
    int duration = 0;
    for (int i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            notes_duration.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                notes_duration.back() /= 2;
            } else {
                notes_duration.push_back(1);
            }
        }
    }
    return notes_duration;
}