Here is the completed code:

map<char, int> histogram(string test) {
    map<char, int> result;
    string letters = test;
    for (char c : letters) {
        if (c != ' ') {
            result[c]++;
        }
    }
    char maxChar = *result.rbegin().first;
    int maxCount = *result.rbegin().second;
    map<char, int> maxResult;
    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            maxResult[it->first] = it->second;
        }
    }
    return maxResult;
}