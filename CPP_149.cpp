bool issame(vector<string> a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> lst_copy = lst;
    
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return lst;
}

int main() {
    vector<string> a = {"apple", "banana", "orange"};
    vector<string> b = {"apple", "banana", "orange"};
    
    if (issame(a, b)) {
        vector<string> result = sorted_list_sum(a);
        for (const string& s : result) {
            cout << s << " ";
        }
    }
    
    return 0;
}