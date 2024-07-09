```
bool areSortedListsEqual(const string& a, const string& b) {
    vector<string> list1;
    vector<string> list2;

    for (int i = 0; i < a.length(); i++) {
        list1.push_back(a.substr(i, 1));
    }

    for (int i = 0; i < b.length(); i++) {
        list2.push_back(b.substr(i, 1));
    }

    sort(list1.begin(), list1.end());
    sort(list2.begin(), list2.end());

    return list1 == list2;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [this](const string& a, const string& b) 
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