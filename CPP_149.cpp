Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    auto result = lst;
    result.erase(remove_if(result.begin(), result.end(),
        [&](const string& s){return s.length() % 2 != 0;}),
        result.end());
    sort(result.begin(), result.end(), 
        [](const string& a, const string& b){
            if(a.length() == b.length()) return a < b;
            return a.length() < b.length();
    });
    return result;
}