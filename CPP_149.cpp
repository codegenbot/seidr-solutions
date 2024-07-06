vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    bool issame(int a, int b) {
        if (a == b) 
            return true; 
        else 
            return false;
    }
    for (const auto& str : lst) {
        if (issame(str.length() % 2, 0)) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}