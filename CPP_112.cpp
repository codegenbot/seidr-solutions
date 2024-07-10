vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> c_set(c.begin(), c.end());
    
    string res = "";
    
    for (char c : s) {
        if (c_set.find(c) == c_set.end()) {
            res += c;
        }
    }
    
    bool is_palindrome = true;
    int left = 0, right = res.size() - 1;
    while (left < right) {
        if (res[left] != res[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    result.push_back(res);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}