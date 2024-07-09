bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> filter_by_substring(vector<string> words, string substring) {
    vector<string> result;
    for (const string& word : words) {
        if (word.find(substring) != string::npos)
            result.push_back(word);
    }
    return result;
}