Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() < b.size();
        });
    vector<string> result;
    for (const auto& str : lst) {
        if (str.size() % 2 == 0) {
            result.push_back(str);
        }
    }
    return result;
}