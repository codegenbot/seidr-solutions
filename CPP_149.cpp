vector<string> sorted_list_sum(vector<string> lst) {
    auto result = lst;
    result.erase(std::remove_if(result.begin(), result.end(),
        [&lst](const string& s) { return (int)s.size() % 2; }), result.end());
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             }
             return a.length() < b.length();
         });
    return result;
}