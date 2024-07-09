```
bool is_palindrome(string text) {
    string temp = text;
    reverse(temp.begin(), temp.end());
    return (temp == text);
}