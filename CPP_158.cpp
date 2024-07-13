string find_max(vector<string> words) {
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) -> bool {
            return count(a.begin(), a.end(), topper(a)) <
                count(b.begin(), b.end(), topper(b));
        });
    return result;
}