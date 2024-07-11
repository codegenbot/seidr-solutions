Here is the solution:

vector<string> sorted_list_sum(vector<string> lst){
    // Remove strings with odd lengths from the vector
    for(auto it = lst.begin(); it != lst.end();){
        if(it->size() % 2 != 0) {
            it = lst.erase(it);
        } else {
            ++it;
        }
    }

    // Sort the vector based on length and then alphabetically
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b){
             if(a.size() == b.size()) return a < b;
             return a.size() < b.size();
         });

    return lst;
}