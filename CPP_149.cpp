Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());

    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });

    vector<string> result;
    for (auto str : lst) {
        if (str.length() % 2 != 0) {
            continue;
        }
        result.push_back(str);
    }

    sort(result.begin(), result.end());

    return result;
}