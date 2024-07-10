string find_max(vector<string> words) {
    string maxWord = *max_element(words.begin(), words.end(),
        [](const string &a, const string &b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            }
            size_t uniqueCharCountA = a.length() - count(a.begin(), a.end(), '*');
            size_t uniqueCharCountB = b.length() - count(b.begin(), b.end(), '*');
            return uniqueCharCountA > uniqueCharCountB;
        });
    return maxWord;
}