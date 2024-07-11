Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    // filter out strings with odd lengths
    for (string s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
        }
    }

    // sort the resulting vector by length and then alphabetically
    sort(result.begin(), result.end(), 
         [](const string &a, const string &b) {
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });

    return result;
}