Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    
    for (auto it = result.begin(); it != result.end(); ) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    
    sort(result.begin(), result.end(),
         [](const string& s1, const string& s2) {
             if (s1.length() != s2.length()) {
                 return s1.length() < s2.length();
             }
             return s1 < s2;
         });
    
    return result;
}