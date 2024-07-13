Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b){ return a.length() % 2 == 1; });
    vector<string> result(it, lst.end());
    
    sort(result.begin(), result.end(),
        [](const string& a, const string& b) {
            if (a.length() != b.length())
                return a.length() < b.length();
            else
                return a < b;
        });
    
    return result;
}