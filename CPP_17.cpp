vector<int> parse_music(string music_string){
    vector<int> beats;
    string delimiter = " ";
    size_t pos = 0;
    string token;
    while ((pos = music_string.find(delimiter)) != string::npos) {
        token = music_string.substr(0, pos);
        if (token == "o") {
            beats.push_back(4);
        } else if (token == "o|") {
            beats.push_back(2);
        } else if (token == ".|") {
            beats.push_back(1);
        }
        music_string.erase(0, pos + delimiter.length());
    }
    if (music_string == "o") {
        beats.push_back(4);
    } else if (music_string == "o|") {
        beats.push_back(2);
    } else if (music_string == ".|") {
        beats.push_back(1);
    }
    return beats;
}