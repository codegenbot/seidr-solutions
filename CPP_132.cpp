Here's the solution:

```cpp
bool is_nested(string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
    }
    return open > 1 && close > 0;
}