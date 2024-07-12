vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the list
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& s) { return s.length() % 2 != 0; }),
        lst.end());

    // Sort the list by length and then alphabetically
    std::stable_partition(lst.begin(), lst.end(),
        [](const string& s) { return s.length() % 2 == 0; });

    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });

    return lst;
}