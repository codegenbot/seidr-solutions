vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    for (const string& s : lst) {
        int sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        if (sum % 2 == 1) {
            result.push_back(s);
        }
    }
    
    sort(result.begin(), result.end());
    return result;
}