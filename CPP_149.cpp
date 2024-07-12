Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    // Filter out strings with odd lengths
    vector<string> result;
    for (const string& s : lst) {
        if (s.size() % 2 == 0) {
            result.push_back(s);
        }
    }

    // Sort the remaining strings by length and then alphabetically
    std::sort(result.begin(), result.end(),
        [](const string& a, const string& b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });

    return result;
}