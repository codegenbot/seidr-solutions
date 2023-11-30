map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string::size_type pos = 0;
    while (pos != string::npos) {
        string::size_type spacePos = test.find(' ', pos);
        string word = test.substr(pos, spacePos - pos);
        if (!word.empty()) {
            for (char c : word) {
                result[c]++;
            }
        }
        if (spacePos == string::npos) {
            break;
        }
        pos = spacePos + 1;
    }
    return result;
}