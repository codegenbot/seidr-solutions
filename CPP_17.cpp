vector<int> parse_music(string music_string){
    vector<int> result;
    string note;
    for (char c : music_string) {
        if (c == ' ') {
            if (note == "o") result.push_back(4);
            else if (note == "o|") result.push_back(2);
            else if (note == ".|") result.push_back(1);
            note.clear();
        } else {
            note += c;
        }
    }
    if (note == "o") result.push_back(4);
    else if (note == "o|") result.push_back(2);
    else if (note == ".|") result.push_back(1);
    return result;
}