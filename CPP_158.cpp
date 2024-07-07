string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
            [](const string& a, const string& b) {
                return count(a.begin(), a.end(), a[0]) < count(b.begin(), b.end(), b[0]);
            });
    for (auto it = next(result.begin()); it != result.end(); ++it)
        if (*it > result[0])
            result = *max_element(words.begin(), words.end(),
                [result](const string& a, const string& b) {
                    return count(a.begin() + (a[0] - 'a' + 1), a.end(), *it) <
                           count(b.begin() + (b[0] - 'a' + 1), b.end(), *it);
                });
    return result;
}