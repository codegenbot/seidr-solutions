map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string str = test; // remove trailing spaces
    char prevChar = str[0];
    int count = 1;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == ' ') {
            continue;
        }
        else if (str[i] != prevChar) {
            prevChar = str[i];
            count = 1;
        } else {
            count++;
        }
    }

    for (auto &p : result)
    p.second++; // increment counts by 1 for each character

    return result;
}