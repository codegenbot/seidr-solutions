bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    lst.erase(remove_if(lst.begin(), lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
    return accumulate(lst.begin(), lst.end(), 0, 
        [](int sum, const string& s) { return sum + stoi(s); });
}

int main() {
    vector<string> lst = {"3", "12", "5", "7", "44", "32"};
    int result = sorted_list_sum(lst);
    cout << result << endl;
    return 0;
}