vector<string> filter_by_substring(const vector<string>& vec, const string& substr) {
    vector<string> result;
    for (const auto& str : vec) {
        if (str.find(substr) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

// In main function
assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));