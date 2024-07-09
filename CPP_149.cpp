vector<string> sorted_list_sum(const vector<string>& a, const vector<string>& b) {
    vector<string> lst = a;
    lst.insert(lst.end(), b.begin(), b.end());

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
    vector<string> b = {"pear", "grape", "kiwi"};

    vector<string> result = sorted_list_sum(a, b);

    for (const auto& word : result) {
        cout << word << " ";
    }

    return 0;
}