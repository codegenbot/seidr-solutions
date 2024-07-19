vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char ch : s) {
        bool flag = false;
        for (char cc : c) {
            if (ch == cc) {
                flag = true;
                break;
            }
        }
        if (!flag)
            temp += ch;
    }
    if (temp.length() > 0) {
        string reverseTemp = temp;
        reverse(temp.begin(), temp.end());
        result.push_back(temp);
        if (isPalindrome(reverseTemp)) {
            result.push_back("True");
        } else {
            result.push_back("False");
        }
    } else
        result.push_back("False");
    return result;
}

bool isPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}