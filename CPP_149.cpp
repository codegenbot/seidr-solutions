bool areSortedListsEqual(const string& a, const string& b) {
    vector<int> vec1(a.begin(), a.end());
    vector<int> vec2(b.begin(), b.end());
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    return vec1 == vec2;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [](const string& a, const string& b)
                      { return areSortedListsEqual(a, b); });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length())
                 return a < b;
             else
                 return a.length() < b.length();
         });
    return lst;
}