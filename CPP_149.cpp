Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the list
    auto new_end = std::remove_if(lst.begin(), lst.end(), 
        [](const string& s){ return s.length() % 2 != 0; });
    lst.erase(new_end, lst.end());
    
    // Sort the remaining strings by length and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });
    
    return lst;
}