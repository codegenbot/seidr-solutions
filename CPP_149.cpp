Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& s1, const string& s2){return s1.length() % 2 != s2.length() % 2;});
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
        [](const string& s1, const string& s2){
            if (s1.length() == s2.length()) 
                return s1 < s2;
            else
                return s1.length() < s2.length();
        });
    return lst;
}