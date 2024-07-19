bool issame(vector<string> a,vector<string>b) {
    return a==b;
}
vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    
    // Remove strings with odd lengths from the list
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }

    // Sort the list by string length and then alphabetically
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });

    return result;
}