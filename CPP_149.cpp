vector<string> sorted_list_sum(vector<string> lst) {
    // Delete strings with odd lengths from the list
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& str) { return str.length() % 2 != 0; }),
        lst.end());
    
    // Sort the list based on the length of each word, and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            } else {
                return a.size() < b.size();
            }
        });
    
    return lst;
}