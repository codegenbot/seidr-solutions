bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<string>> sorted_list_sum(vector<vector<string>>& lists) {
    vector<vector<string>> result;
    
    for (const auto& lst : lists) {
        vector<string> sorted = sorted_list_sum(lst);
        bool found = false;

        for (const auto& res : result) {
            if (issame(sorted, res)) {
                found = true;
                break;
            }
        }

        if (!found) {
            result.push_back(sorted);
        }
    }
    
    return result;
}