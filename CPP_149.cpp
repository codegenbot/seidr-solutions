bool issame(const string& s1, const string& s2) {
    int sum1 = 0, sum2 = 0;
    
    for (char c : s1) {
        sum1 += c - '0';
    }
    
    for (char c : s2) {
        sum2 += c - '0';
    }
    
    return sum1 == sum2;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 for (size_t i = 0; i < a.size(); ++i) {
                     if (!issame(a.substr(i, 1), b.substr(i, 1))) {
                         return issame(a.substr(i, 1), b.substr(i, 1)) ? a.compare(b) > 0 : a.compare(b) < 0;
                     }
                 }
             }
         });
    
    return result;
}