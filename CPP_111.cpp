map<char, int> result;
    stringstream ss(test);
    string token;
    while (ss >> token) {
        for (char c : token) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (auto itr = result.begin(); itr != result.end(); ++itr) {
        if (itr->second > maxCount) {
            maxCount = itr->second;
        }
    }
    map<char, int> res;
    for (auto itr = result.begin(); itr != result.end(); ++itr) {
        if (itr->second == maxCount) {
            res[itr->first] = itr->second;
        }
    }
    return res;
}