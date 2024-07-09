Here is the completed code:

```cpp
bool is_nested(string str) {
    int nesting = 0;
    for (char c : str) {
        if (c == '[') {
            nesting++;
        } else if (c == ']') {
            if (nesting > 0) {
                nesting--;
            } else {
                return false;
            }
        }
    }
    return nesting > 0;
}