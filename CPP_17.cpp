vector<int> beats;

    for (size_t i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            if (i < music_string.size() - 1 && music_string[i+1] == '|') {
                beats.push_back(2);
                ++i;
            } else {
                beats.push_back(4);
            }
        } else {
            beats.push_back(1);
            ++i;
        }
    }

    return beats;