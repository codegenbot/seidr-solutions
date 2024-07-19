bool issame(vector<string> a, vector<string> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<vector<string>> group_by_length(vector<string> lst) {
    unordered_map<int, vector<string>> result;

    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            int len = str.length();
            if (result.find(len) != result.end()) {
                result.at(len).push_back(str);
            } else {
                result[len] = {str};
            }
        }
    }

    vector<vector<string>> result_vector;
    for (const auto& pair : result) {
        result_vector.push_back(pair.second);
    }

    return result_vector;
}