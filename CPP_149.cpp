bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
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
    // Main function code here
    return 0;
}