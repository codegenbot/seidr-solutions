bool issame(const string& a, const string& b) {
    return a.length() == b.length() && a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> result = lst;
    result.erase(remove_if(result.begin(), result.end(), [](const string& s) { return s.length() % 2 != 0; }), result.end());
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    vector<string> lst;
    string input;
    while (cin >> input) {
        lst.push_back(input);
    }

    vector<string> sorted_lst = sorted_list_sum(lst);

    for (const auto& str : sorted_lst) {
        cout << str << " ";
    }

    return 0;
}