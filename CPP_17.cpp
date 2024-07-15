vector<int> parse_music(string music_string){
    vector<int> beats;
    size_t pos = 0;
    while ((pos = music_string.find("o", pos)) != string::npos) {
        size_t next_pos = music_string.find_first_not_of("o|.", pos);
        int count = (next_pos - pos) / 2;
        beats.push_back(count);
        pos = next_pos;
    }
    return beats;
}