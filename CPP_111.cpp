map<char, int> result;
    map<char, int> count;
    int max_count = 0;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
            max_count = max(max_count, count[c]);
        }
    }

    for (const auto& pair : count) {
        if (pair.second == max_count) {
            result[pair.first] = pair.second;
        }
    }

    return result;