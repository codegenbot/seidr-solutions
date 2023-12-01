vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string res_str = "";
    
    // Delete characters in s that are equal to any character in c
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            res_str += s[i];
        }
    }
    
    // Check if the result string is a palindrome
    bool is_palindrome = true;
    int left = 0;
    int right = res_str.length() - 1;
    while (left < right) {
        if (res_str[left] != res_str[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    // Add the result string and the check result to the vector
    result.push_back(res_str);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}