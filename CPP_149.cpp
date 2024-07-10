bool issame(const string& a, const string& b) {
    int sum_a = 0, sum_b = 0;
    for(int i = 0; i < a.length(); i++) {
        sum_a += a[i] - '0';
    }
    for(int i = 0; i < b.length(); i++) {
        sum_b += b[i] - '0';
    }
    return sum_a == sum_b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Delete strings with odd lengths from the list
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& str) { return str.length() % 2 != 0; }),
        lst.end());
    
    // Sort the list based on whether two strings are same (sum of digits in each string), 
    // and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (issame(a, b)) {
                return a < b;
            } else {
                return issame(a, b);
            }
        });
    
    return lst;
}