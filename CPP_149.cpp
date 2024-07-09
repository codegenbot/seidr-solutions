bool issame(const string& a, const string& b) {
    if (a.length() == b.length()) {
        for (size_t i = 0; i < a.length(); ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    for (const auto& str : lst) {
        if (issame(str, str)) { // Check if the string is the same when reversed
            result.push_back(str);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}