vector<int> parse_music(string music_string){ 
    vector<int> beats;
    size_t pos = 0;
    while ((pos = music_string.find_first_not_of(' ', pos)) != string::npos) {
        if (music_string.substr(pos, 2) == "o ") {
            beats.push_back(4);
            pos += 2;
        } else if (music_string.substr(pos, 2) == "o|") {
            beats.push_back(2);
            pos += 2;
        } else if (music_string.substr(pos, 2) == ".|") {
            beats.push_back(1);
            pos += 2;
        } else if (music_string[pos] == 'o') {
            beats.push_back(4);
            pos += 1;
        } else {
            pos += 1;
        }
    }
    return beats;
}