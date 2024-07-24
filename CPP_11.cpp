Here is the completed code:

```cpp
string string_xor(string a, string b) {
    int len = max(a.length(), b.length());
    string result(len, '0');
    for (int i = 0; i < len; i++) {
        if ((i < a.length() && a[i] == '1') ^ (i < b.length() && b[i] == '1'))
            result[i] = '1';
    }
    return result;
}