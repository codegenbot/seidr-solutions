Here's the completed code:

```cpp
bool is_nested(string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') count++;
        else if (c == ']') count--;
        if (count < 0) return false;
    }
    return count > 0;
}