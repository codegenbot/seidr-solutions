vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });
    vector<string> result;
    for (string s : lst) {
        if (s.length() % 2 != 1) {
            result.push_back(s);
        }
    }
    return result;
}