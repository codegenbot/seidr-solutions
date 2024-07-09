Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b){
            if (a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
    vector<string> result;
    for (string s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
        }
    }
    return result;