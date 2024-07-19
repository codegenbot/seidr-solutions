bool issame(vector<string> a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> copy_lst = lst;
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
    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = sorted_list_sum(a);
    bool result = issame(a, b);
    return 0;
}