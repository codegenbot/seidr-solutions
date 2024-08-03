```cpp
int count_open = 0, count_close = 0;

for (char c : str) {
    if (c == '[') count_open++;
    else if (c == ']') count_close++;

    if (count_open > count_close && count_open > 0) return true;
}

return false;