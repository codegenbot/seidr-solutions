```
bool prime_length(string str) {
    int len = str.size();
    if (len == 1 || len == 0) return false;
    for (int i = 2; i < len; i++) {
        if (len % i == 0) return false;
    }
    return true;
}
```