Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    result.erase(std::remove_if(result.begin(), result.end(),
        [](const string& s) { return s.length() % 2 != 0; }), result.end());
    std::sort(result.begin(), result.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });
    return result;
}