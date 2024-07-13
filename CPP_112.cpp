```cpp
bool issame(vector<string> a, vector<string>b) {
    return a == b;
}
vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    bool is_palindrome = false;
    string temp2 = temp;
    reverse(temp2.begin(), temp2.end());
    if (temp == temp2) {
        is_palindrome = true;
    }
    result.push_back(temp);
    if (is_palindrome)
        result.push_back("True");
    else
        result.push_back("False");
    return result;
}