bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b; 
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> res = lst;
    res.erase(remove_if(res.begin(), res.end(), [](const string& s) { return s.length() % 2 != 0; }), res.end());
    sort(res.begin(), res.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return res;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}