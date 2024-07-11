Here is the completed code:

```cpp
string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).reverse() : result;
}