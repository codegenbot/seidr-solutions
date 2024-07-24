bool issame(const vector<string>& a, const vector<string>& b) {
    return accumulate(a.begin(), a.end(), 0, [](int acc, const string& s) { return acc + s.length(); })
            == accumulate(b.begin(), b.end(), 0, [](int acc, const string& s) { return acc + s.length(); });
}

void sorted_list_sum(vector<string>& lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
}

int main() {
    vector<string> lst = {"apple", "banana", "cherry", "date", "fig"};
    sorted_list_sum(lst);
    return 0;
}