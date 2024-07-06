vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), 
         [](const string& s1, const string& s2) {
             if (s1.length() != s2.length()) {
                 return s1.length() < s2.length();
             } else {
                 return s1 < s2;
             }
         });
    return result;
}