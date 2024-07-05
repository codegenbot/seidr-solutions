vector<int> parse_music(string music_string) { 
    vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == ' ') {
            if (note == "o") beats.push_back(4);
            else if (note == "o|") beats.push_back(2);
            else if (note == ".|") beats.push_back(1);
            note = "";
        } else {
            note += c;
        }
    }
    // Process the last note if there is any
    if (note == "o") beats.push_back(4);
    else if (note == "o|") beats.push_back(2);
    else if (note == ".|") beats.push_back(1);
    
    return beats;
}