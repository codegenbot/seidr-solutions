vector<string> sorted_list_sum(vector<string> lst, vector<string> b) {
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
    vector<string> lst = {"apple", "banana", "cherry", "date"};
    vector<string> b;
    vector<string> result = sorted_list_sum(lst, b);
    for (const auto& s : result) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}