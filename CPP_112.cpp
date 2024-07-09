vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string newS = "";
    
    // Delete all characters in s that are equal to any character in c
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            newS += ch;
        }
    }
    
    // Check if the result string is palindrome
    bool isPalindrome = true;
    int start = 0, end = newS.length() - 1;
    while (start < end) {
        if (newS[start] != newS[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    // Return the result string and palindrome check
    result.push_back(newS);
    if (isPalindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}