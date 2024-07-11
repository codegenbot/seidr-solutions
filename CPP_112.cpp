Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Remove all characters in s that are equal to any character in c
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    
    // Check if the result string is palindrome
    string revTemp = temp;
    reverse(revTemp.begin(), revTemp.end());
    bool isPalindrome = (temp == revTemp);
    
    result.push_back(temp);
    result.push_back(isPalindrome ? "True" : "False");
    
    return result;
}