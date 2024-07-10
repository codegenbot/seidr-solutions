std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    vector<string> result;
    
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            result.push_back(std::string(1, ch));
        }
    }
    
    string resStr = "";
    for (int i = 0; i < result.size(); i++) {
        resStr += result[i];
    }
    
    bool isPalindrome = true;
    int start = 0, end = resStr.length() - 1;
    while (start < end) {
        if (resStr[start] != resStr[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    result.push_back(std::to_string(isPalindrome ? 1 : 0));
    return result;
}