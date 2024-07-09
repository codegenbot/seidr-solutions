vector<string> sorted_list_sum(vector<string> lst) {
    auto isSameLength = [](const string& a, const string& b)
        { return a.length() % 2 == b.length() % 2; };
    vector<string> result;
    
    for (auto it = unique(lst.begin(), lst.end(), isSameLength); it != lst.end(); ++it) {
        result.push_back(*it);
    }
    
    sort(result.begin(), result.end());
    return result;
}