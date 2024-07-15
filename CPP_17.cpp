vector<int> durations;
    string delimiter = " ";
    size_t pos = 0;
    string token;
    while ((pos = music_string.find(delimiter)) != string::npos) {
        token = music_string.substr(0, pos);
        if (token == "o") {
            durations.push_back(4);
        } else if (token == "o|") {
            durations.push_back(2);
        } else if (token == ".|") {
            durations.push_back(1);
        }
        music_string.erase(0, pos + delimiter.length());
    }
    if (!music_string.empty()) {
        if (music_string == "o") {
            durations.push_back(4);
        } else if (music_string == "o|") {
            durations.push_back(2);
        } else if (music_string == ".|") {
            durations.push_back(1);
        }
    }
    return durations;
}