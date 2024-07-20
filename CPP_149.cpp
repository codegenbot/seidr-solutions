vector<string> vector_sort(vector<string> lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](string s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](string a, string b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}