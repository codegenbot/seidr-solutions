std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    
    std::set<char> c_set(c.begin(), c.end());
    
    std::string temp = "";
    
    for (char ch : s) {
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    int i = 0, j = temp.length() - 1;
    bool is_palindrome = true;
    
    while (i < j) {
        if (temp[i] != temp[j]) {
            is_palindrome = false;
            break;
        }
        i++;
        j--;
    }
    
    result.push_back(temp);
    if (is_palindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}