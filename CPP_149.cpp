bool issame(vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
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
    vector<string> lst = {"apple", "banana", "orange", "kiwi", "grape"};
    vector<string> result = sorted_list_sum(lst);
    for (const auto& str : result) {
        cout << str << " ";
    }
    cout << endl;
    vector<string> lst2 = {"apple", "kiwi", "orange", "banana", "grape"};
    cout << issame(lst, lst2) << endl;
    return 0;
}