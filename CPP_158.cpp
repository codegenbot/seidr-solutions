Here is the solution:

string find_max(vector<string> words) {
    string maxWord = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        },
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), unique_copy(a.begin(), a.end())) >
                   count(b.begin(), b.end(), unique_copy(b.begin(), b.end()));
    });
    return maxWord;
}