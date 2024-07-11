bool issame(vector<string> b, vector<string> a) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> result = lst;
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
    vector<string> input = {"apple", "banana", "kiwi", "orange", "pear"};
    vector<string> result = sorted_list_sum(input);
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;

    vector<string> compare = {"apple", "kiwi", "pear"};
    if (issame(result, compare)) {
        cout << "Lists are the same." << endl;
    } else {
        cout << "Lists are different." << endl;
    }

    return 0;
}