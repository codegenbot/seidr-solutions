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

vector<string> sort_and_remove_odd_length(vector<string> lst) {
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
    vector<string> lst = {"123", "456", "78", "90", "1234", "5678"};
    lst = sort_and_remove_odd_length(lst);
    int sum = sorted_list_sum(lst);
    cout << sum << endl;
    return 0;
}