bool issame(const string& a, const string& b) {
    return a.length() == b.length();
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_list = lst;
    sorted_list.erase(remove_if(sorted_list.begin(), sorted_list.end(), [](const string& s) { return s.length() % 2 != 0; }), sorted_list.end());
    sort(sorted_list.begin(), sorted_list.end(), [](const string& a, const string& b) {
        if (issame(a, b)) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_list;
}

int main() {
    vector<string> lst = { /* Input vector of strings */ };
    vector<string> result = sorted_list_sum(lst);

    for (const auto& str : result) {
        cout << str << " ";
    }

    return 0;
}