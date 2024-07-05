vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    for (size_t i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == ' ') {
            if (note == "o") beats.push_back(4);
            else if (note == "o|") beats.push_back(2);
            else if (note == ".|") beats.push_back(1);
            note.clear();
        } else {
            note += music_string[i];
        }
    }
    // Add last note if there's no trailing space
    if (!note.empty()) {
        if (note == "o") beats.push_back(4);
        else if (note == "o|") beats.push_back(2);
        else if (note == ".|") beats.push_back(1);
    }
    return beats;
}