Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) {
            if (a.size() != b.size()) {
                return a.size() < b.size();
            } else {
                return a < b;
            }
        });
    vector<string> result;
    for (string s : lst) {
        if (s.size() % 2 == 0) {
            result.push_back(s);
        }
    }
    return result;