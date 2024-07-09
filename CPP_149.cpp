Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    // Delete strings that have odd lengths from the vector
    lst.erase(std::remove_if(lst.begin(), lst.end(), 
        [](const string& str) { return str.length() % 2; }), 
        lst.end());

    // Sort the resulted vector by length and then alphabetically
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