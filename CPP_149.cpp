vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Filter out strings with odd lengths and sort the remaining strings by length and then alphabetically
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