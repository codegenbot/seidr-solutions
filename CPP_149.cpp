bool issame(vector<string> a, vector<string> b) {
    return accumulate(a.begin(), a.end(), string()) == accumulate(b.begin(), b.end(), string());
}

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    return lst;
}

int main() {
    // Main function implementation
    return 0;
}