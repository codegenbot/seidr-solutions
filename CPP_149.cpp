bool issame(vector<string> lst1, vector<string> lst2) {
    if (lst1.size() != lst2.size()) {
        return false;
    }
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] != lst2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        int sum = 0;
        for (char c : s) {
            sum += (c - '0');
        }
        if (sum % 2 == 0) {
            result.push_back(s);
        }
    }

    sort(result.begin(), result.end());

    return result;
}