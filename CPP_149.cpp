bool issame(const string& a, const string& b) {
    return a.length() == b.length() && a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sorted_lst.erase(remove_if(sorted_lst.begin(), sorted_lst.end(), [](const string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_lst;
}

int main() {
    int n;
    cin >> n;
    vector<string> lst(n);
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }

    vector<string> result = sorted_list_sum(lst);

    int sum = 0;
    for (const string& s : result) {
        sum += s.length();
    }
    cout << sum;

    return 0;
}