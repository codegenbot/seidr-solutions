map<char,int> result;
    map<char,int> counts;
    int maxCount = 0;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
            maxCount = max(maxCount, counts[c]);
        }
    }
    for (auto &count : counts) {
        if (count.second == maxCount) {
            result.insert(count);
        }
    }
    return result;
}