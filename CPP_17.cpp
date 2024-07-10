vector<int> parse_music(string music_string){
    vector<int> beats;
    size_t pos = 0;
    string delimiter = " ";
    while ((pos = music_string.find(delimiter)) != string::npos) {
        string note = music_string.substr(0, pos);
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
        music_string.erase(0, pos + delimiter.length());
    }
    return beats;
}