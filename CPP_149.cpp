Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 != 0) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             }
             return a.length() < b.length();
         });
    return result;
}