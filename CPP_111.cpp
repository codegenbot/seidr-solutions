map<char, int> histogram(string test) {
    map<char, int> result;
    string s = " ";
    for (char c : test + " ") {
        if (s[0] == ' ') {
            s = "" + c;
        } else {
            s += c;
        }
        if (s.size() > 1) {
            if (!result.count(s[0])) {
                result[s[0]] = 1;
            } else {
                result[s[0]]++;
            }
            s = " ";
        }
    }
    return result;
}