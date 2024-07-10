vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const string& s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}

bool issame(string s1, string s2) {
    for (int i = 0; i < min(s1.length(), s2.length()); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return s1.length() == s2.length();
}