Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = remove_if(lst.begin(), lst.end(), 
                        [](const string& str){ return str.length() % 2; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b){
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });
    return lst;
}