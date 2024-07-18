bool issame(vector<string> a, vector<string> b) {
    return accumulate(a.begin(), a.end(), 0) == accumulate(b.begin(), b.end(), 0);
}

vector<string> sorted_list_sum(const vector<string>& lst) {
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
    // Main function logic here
    return 0;
}