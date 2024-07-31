map<char, int> histo;
    for (char c : test) {
        if (c != ' ') {
            histo[c]++;
        }
    }

    int max_count = 0;
    for (const auto& pair : histo) {
        max_count = max(max_count, pair.second);
    }

    map<char, int> result;
    for (const auto& pair : histo) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}