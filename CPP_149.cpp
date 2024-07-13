vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the vector
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& s) { return s.size() % 2 != 0; }), lst.end());
    
    // Sort the vector by length and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() < b.size();
        });
    
    return lst;
}