vector<string> sorted_list_sum(vector<string> lst){
    // Remove strings with odd lengths
    vector<string> result;
    for(auto s : lst) {
        if(s.length() % 2 == 0) {
            result.push_back(s);
        }
    }

    // Sort the resulting vector by length and then alphabetically
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if(a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });

    return result;
}