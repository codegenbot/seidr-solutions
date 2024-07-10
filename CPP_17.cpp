vector<int> beats;
    for (size_t i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
            i++; // skip the next character '|' since it's already processed
        }
    }
    return beats;
}