vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += s[i];
        }
    }
    result.push_back(temp);
    
    string palindromCheck = temp;
    reverse(palindromCheck.begin(), palindromCheck.end());
    
    bool isPalindrome = (palindromCheck == temp);
    
    result.push_back(std::to_string(isPalindrome));
    
    for (char ch : s) {
        if (find(c.begin(), c.end(), ch) == c.end()) {
            result.push_back(std::string(1, ch));
        }
    }
    return result;
}