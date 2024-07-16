map<char, int> result;
    map<char, int> histogram;
    int maxCount = 0;

    for (char c : test) {
        if (c != ' ') {
            histogram[c]++;
            maxCount = max(maxCount, histogram[c]);
        }
    }

    for (auto it = histogram.begin(); it != histogram.end(); ++it) {
        if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }

    return result;
}