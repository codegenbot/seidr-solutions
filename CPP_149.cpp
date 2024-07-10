```
bool issame(string str1, string str2) {
    bool flag = false;
    for(int i=0; i<str1.size(); i++) {
        if(str1[i] == str2[i])
            flag = true;
        else
            return false;
    }
    return flag;
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Delete strings with odd lengths from the list
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& str) { return str.length() % 2 != 0; }),
        lst.end());
    
    // Sort the list based on the length of each word, and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return issame(a, b);
            } else {
                return a.size() < b.size();
            }
        });
    
    return lst;
}