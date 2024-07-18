bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    int sum = 0;
    for (const string& s : sorted_lst) {
        sum += stoi(s);
    }
    return sum;
}

int main() {
    // Read input
    int n;
    cin >> n;
    vector<string> lst(n);
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }

    // Sort the list and calculate sum
    int result = sorted_list_sum(lst);
    cout << result << endl;

    return 0;
}