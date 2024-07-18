vector<int> parse_music(string music_string){
    vector<int> result;
    string delimiter = " ";
    size_t pos = 0;
    while ((pos = music_string.find(delimiter)) != string::npos) {
        string note = music_string.substr(0, pos);
        music_string.erase(0, pos + delimiter.length());
        if (note == "o") {
            result.push_back(4);
        } else if (note == "o|") {
            result.push_back(2);
        } else if (note == ".|") {
            result.push_back(1);
        }
    }
    if (!music_string.empty()) {
        if (music_string == "o") {
            result.push_back(4);
        } else if (music_string == "o|") {
            result.push_back(2);
        } else if (music_string == ".|") {
            result.push_back(1);
        }
    }
    return result;
}