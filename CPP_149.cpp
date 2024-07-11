vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    vector<string> result;
    
    while (it != lst.end()) {
        if (it->length() % 2 == 0) {
            result.push_back(*it);
        }
        it++;
    }
    
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