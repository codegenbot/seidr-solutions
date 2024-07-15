bool issame(const string& a, const string& b) {
    return a.length() == b.length() && a < b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    lst.erase(remove_if(sorted_lst.begin(), sorted_lst.end(), [](const string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_lst;
}

int main() {
    vector<string> lst = {"apple", "banana", "orange", "kiwi"};
    vector<string> result = sorted_list_sum(lst);
    for (const auto& str : result) {
        cout << str << " ";
    }
    return 0;
}