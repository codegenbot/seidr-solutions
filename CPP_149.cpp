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
    vector<int> v1(s1.begin(), s1.end());
    vector<int> v2(s2.begin(), s2.end());

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    return (v1 == v2);
}