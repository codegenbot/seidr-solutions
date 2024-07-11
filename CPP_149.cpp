bool issame(const string& a, const string& b) {
    return a.length() == b.length();
}

int sorted_list_sum(const vector<string>& lst) {
    int sum = 0;
    for (const string& s : lst) {
        sum += stoi(s);
    }
    return sum;
}

vector<string> task_function(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (issame(a, b)) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    int n;
    cin >> n;
    vector<string> lst(n);
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }
    
    vector<string> result = task_function(lst);
    for (const string& s : result) {
        cout << s << " ";
    }
    
    int sum = sorted_list_sum(result);
    cout << sum << endl;
    
    return 0;
}