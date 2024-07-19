Here is the completed code:

```cpp
string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char baseChar = isupper(c) ? 'A' : 'a';
            result += ((c - baseChar + 2 * 26) % 26) + baseChar;
        } else {
            result += c;
        }
    }
    return result;
}