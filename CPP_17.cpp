vector<int> durations;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            durations.push_back(4);
            i += 2;
        } else if (music_string[i] == '.') {
            durations.push_back(1);
            i += 2;
        }
    }
    return durations;
}