```
int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 10 == 1 || i / 10 == 1) {
            count++;
        }
    }
    return count;
}
```