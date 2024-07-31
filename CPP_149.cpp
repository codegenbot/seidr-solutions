bool issame(vector<string> a, vector<string> b){
    a.erase(remove_if(a.begin(), a.end(), [](const string& s) { return s.length() % 2 != 0; }), a.end());
    sort(a.begin(), a.end(), [](const string& x, const string& y) {
        if (x.length() == y.length()) {
            return x < y;
        }
        return x.length() < y.length();
    });
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_list = lst;
    sort(sorted_list.begin(), sorted_list.end());
    return sorted_list;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}