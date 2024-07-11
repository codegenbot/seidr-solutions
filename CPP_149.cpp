bool issame(const string& a, const string& b) {
    return a.length() == b.length() && a == b;
}

int sorted_list_sum(const vector<string>& lst) {
    int sum = 0;
    for (const string& s : lst) {
        sum += stoi(s);
    }
    return sum;
}

vector<string> solve(vector<string> lst) {
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
    vector<string> lst;
    string input;
    while (cin >> input) {
        lst.push_back(input);
    }

    vector<string> result = solve(lst);
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;

    cout << sorted_list_sum(result) << endl;

    return 0;
}