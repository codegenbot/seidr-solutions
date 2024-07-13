Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b) { return (a.length() % 2 == 1 && b.length() % 2 != 1) ||
           (a.length() % 2 != 1 && b.length() % 2 == 1); });
    lst.erase(it, lst.end());

    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() < b.length()) return true;
            if (a.length() > b.length()) return false;
            return a < b;
        });

    return lst;
}