vector<string> vector_sort(vector<string> lst){
    auto it = unique(lst.begin(), lst.end(), 
                    [](const string &s1, const string &s2) {
                        return s1.length() % 2 == 0 && s2.length() != 0;
                    });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
        [](const string &s1, const string &s2) {
            if (s1.length() != s2.length()) return s1.length() < s2.length();
            return s1 < s2;
        });
    
    return lst;
}