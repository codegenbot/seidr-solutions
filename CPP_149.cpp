bool issame(vector<string> a, vector<string> b) {
    unordered_map<char, int> freq_a, freq_b;

    for (const string& s : a) {
        for (char c : s) {
            freq_a[c]++;
        }
    }

    for (const string& s : b) {
        for (char c : s) {
            freq_b[c]++;
        }
    }

    return freq_a == freq_b;
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
    // Main function implementation
    return 0;
}