vector<int> beats;
    int n = music_string.size();
    for (int i = 0; i < n; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i-1] == 'o') {
                beats.back() = 2;
            } else {
                beats.push_back(1);
            }
        }
    }
    return beats;
}