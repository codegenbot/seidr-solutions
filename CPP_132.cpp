Here is the completed code:

```cpp
bool is_nested(string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 1 || count == 0) return true;
            count--;
        }
    }
    return false;
}