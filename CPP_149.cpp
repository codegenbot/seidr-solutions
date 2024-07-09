Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths
    vector<string> result = {};
    for (const string& s : lst) {
        if (s.size() % 2 == 0) {
            result.push_back(s);
        }
    }

    // Sort the resulting vector by length and then alphabetically
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.size() != b.size()) return a.size() < b.size();
             return a < b;
         });

    return result;
}