map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : letters) {
        if (c == ' ') continue;
        ++result[c];
    }

    auto maxLetter = *std::max_element(result.begin(), result.end(),
                                       [](const auto& a, const auto& b) { return a.second < b.second; });
    int maxCount = result[maxLetter];

    map<char, int> maxResult;
    for (auto& p : result) {
        if (p.second == maxCount)
            maxResult[p.first] = p.second;
    }

    return maxResult;
}