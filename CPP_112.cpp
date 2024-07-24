Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char x : s) {
        bool flag = false;
        for (char y : c) {
            if (x == y) {
                flag = true;
                break;
            }
        }
        if (!flag)
            temp += x;
    }
    if (temp.length() > 0 && isPalindrome(temp))
        result.push_back(temp + "," + "True");
    else
        result.push_back(temp + "," + "False");
    return result;
}

bool isPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (s == rev)
        return true;
    else
        return false;
}