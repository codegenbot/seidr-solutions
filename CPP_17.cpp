vector<int> parse_music(string music_string){
    vector<int> result;
    string delim = " ";
    size_t pos = 0;
    while ((pos = music_string.find(delim)) != string::npos) {
        string token = music_string.substr(0, pos);
        if (token == "o") {
            result.push_back(4);
        } else if (token == "o|") {
            result.push_back(2);
        } else if (token == ".|") {
            result.push_back(1);
        }
        music_string.erase(0, pos + delim.length());
    }
    return result;
}