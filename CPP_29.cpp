vector<vector<string>> isEqual(vector<vector<string>> a, vector<vector<string>> b){
    bool result = true;
    if (a.size() != b.size()) {
        result = false;
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i].size() != b[i].size()) {
                result = false;
                break;
            }
            bool found = false;
            for (const auto& str : a[i]) {
                if (std::find(b[i].begin(), b[i].end(), str) != b[i].end()) {
                    found = true;
                    break;
                }
            }
            if (!found) result = false;
        }
    }
    return {std::vector<string>{(result)? "True": "False"}};
}