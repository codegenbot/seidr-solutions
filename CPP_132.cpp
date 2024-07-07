Here's the solution:

```cpp
int count_open = 0, count_close = 0;

for (char c : str) {
    if (c == '[') {
        count_open++;
        count_close = 0;
    } else if (c == ']') {
        count_close++;
        if (count_open > count_close)
            return true;
        if (count_close > count_open)
            return false;
    }
}

return false;