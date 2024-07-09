Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    // Delete the strings that have odd lengths from it
    lst.erase(remove_if(lst.begin(), lst.end(),
        [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    
    // Sort the vector by length and then alphabetically
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            } else {
                return a.length() < b.length();
            }
        });
    
    return lst;
}