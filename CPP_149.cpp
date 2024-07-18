bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> res = lst;
    
    sort(res.begin(), res.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return res;
}

int main() {
    // Code for reading input and calling sorted_list_sum function
    return 0;
}