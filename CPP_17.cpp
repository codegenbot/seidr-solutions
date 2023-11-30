vector<int> parse_music(string music_string){
    vector<int> notes_duration;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            notes_duration.push_back(4);
            i++;
        } else if (music_string.substr(i, 2) == "o|") {
            notes_duration.push_back(2);
            i += 2;
        } else if (music_string.substr(i, 2) == ".|") {
            notes_duration.push_back(1);
            i += 2;
        } else {
            i++;
        }
    }
    return notes_duration;
}