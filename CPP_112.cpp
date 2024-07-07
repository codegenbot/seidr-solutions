Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    bool isPalindrome = true;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    result.push_back(temp);
    result.push_back((isPalindrome) ? "True" : "False");
    return result;
}