bool issame(string s1, string s2) {
    int count = 0;
    for (int i = 0; i < min(s1.length(), s2.length()); i++) {
        if (s1[i] == s2[i]) {
            count++;
        } else {
            break;
        }
    }
    return count > 0;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Remove strings with odd lengths from the list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Sort the resulting list by length and then alphabetically
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return issame(a, b);
             }
         });

    return result;
}