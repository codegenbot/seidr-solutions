Here is the completed code:

```cpp
string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char newC = ((c - 'a' + 2 * 2) % 26) + 'a';
            result += newC;
        } else if (c >= 'A' && c <= 'Z') {
            char newC = ((c - 'A' + 2 * 2) % 26) + 'A';
            result += newC;
        } else {
            result += c;
        }
    }
    return result;
}