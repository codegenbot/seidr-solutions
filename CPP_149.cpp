vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });
    vector<string> result;
    for (const string& s : lst) {
        bool isSame = false;
        for (int i = 0; i < result.size(); ++i) {
            if (issame(vector<string>({s}), vector<string>(result[i].split(" ")))) {
                isSame = true;
                break;
            }
        }
        if (!isSame)
            result.push_back(s);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}