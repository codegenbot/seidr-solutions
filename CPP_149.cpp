bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        sort(a[i].begin(), a[i].end());
        sort(b[i].begin(), b[i].end());
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;

    // Remove strings with odd lengths from the list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back({{str}});
    }

    // Sort the resulted lists by length and then alphabetically
    sort(result.begin(), result.end(),
         [](const vector<string>& a, const vector<string>& b) {
             if (a.size() != b.size())
                 return a.size() - b.size();
             else
                 return a[0] < b[0];
         });

    return result;
}