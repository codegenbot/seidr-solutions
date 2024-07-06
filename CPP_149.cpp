vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    auto it = unique(lst.begin(), lst.end(),
                     [](const string& a, const string& b) { return a.length() % 2 == 1; });
    lst.erase(it, lst.end());

    for (string s : lst) {
        int sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        result.push_back(to_string(sum));
    }

    sort(result.begin(), result.end());
    
    return result;
}