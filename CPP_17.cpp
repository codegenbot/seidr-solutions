vector<int> parse_music(string music_string){
    vector<int> result;
    
    string note;
    for (size_t i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            note += music_string[i];
            ++i; // move to next character
            if (i < music_string.size() && music_string[i] == '|') {
                note += music_string[i];
            }
            if (note == "o") {
                result.push_back(4);
            } else if (note == "o|") {
                result.push_back(2);
            }
            note.clear();
        } else if (music_string[i] == '.') {
            note += music_string[i];
            ++i; // move to next character
            if (i < music_string.size() && music_string[i] == '|') {
                note += music_string[i];
            }
            if (note == ".|") {
                result.push_back(1);
            }
            note.clear();
        }
    }
    
    return result;
}