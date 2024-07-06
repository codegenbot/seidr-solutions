string find_max(vector<string> words) {
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (int)a.size() + a.count(' ') == (int)b.size() + b.count(' ')
                ? lexicographical_compare(a.begin(), a.end(), b.begin(), b.end())
                : (a.size() + a.count(' ')) < (b.size() + b.count(' '));
        }).first;
    return result;
}