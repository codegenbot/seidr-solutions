bool issame(const string& a, const string& b) {
    return a.length() == b.length();
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Delete strings that have odd lengths from the list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Sort the resulted vector by length and then alphabetically
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (!issame(a, b)) return a.length() < b.length();
             else return a < b;
         });

    return result;
}