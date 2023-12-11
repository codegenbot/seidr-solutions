```cpp
int hex_key(string num) {
    int count = 0;
    for (auto it = num.begin(); it != num.end(); ++it) {
        if (isPrime(*it - '0')) count++;
    }
    return count;
}
```