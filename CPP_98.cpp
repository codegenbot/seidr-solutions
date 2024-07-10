Here is the completed code:

```cpp
int count_upper(string s) {
    int count = 0;
    for (int i = 1; i < s.size(); i++) {
        if (i % 2 == 0 && isupper(s[i])) {
            count++;
        }
    }
    return count;
}