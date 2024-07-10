bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (issame_helper(a[i], b[i])) {
            continue;
        } else {
            return false;
        }
    }
    
    return true;
}

bool issame_helper(string str1, string str2) {
    vector<char> v1(str1.begin(), str1.end());
    vector<char> v2(str2.begin(), str2.end());
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    return v1 == v2;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) { return a.length() < b.length(); });

    // If two words have the same length, sort alphabetically
    std::stable_partition(result.begin(), result.end(),
        [len](const string& str) { return str.length() == len; });

    return result;
}