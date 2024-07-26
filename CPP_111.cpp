map<char, int> hist;
    int maxFreq = 0;
    for (char c : test) {
        if (islower(c)) {
            hist[c]++;
            maxFreq = max(maxFreq, hist[c]);
        }
    }

    map<char, int> result;
    for (auto it = hist.begin(); it != hist.end(); ++it) {
        if (it->second == maxFreq) {
            result[it->first] = it->second;
        }
    }

    return result;
}