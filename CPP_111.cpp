Here is the completed code:

map<char, int> histogram(string test) {
    map<char, int> result;
    string str = test + " ";
    int maxCount = 0;

    for (char c : str) {
        if (c != ' ') {
            if (result.find(c) == result.end()) {
                result[c] = 1;
            } else {
                result[c]++;
            }
            if (result[c] > maxCount)
                maxCount = result[c];
        }
    }

    for (auto it = result.begin(); it != result.end(); ++it) {
        if (it->second == maxCount) {
            cout << "{" << it->first << ", " << it->second << "}" << endl;
        }
    }

    return result;
}