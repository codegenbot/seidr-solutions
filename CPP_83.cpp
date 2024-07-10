Here is the completed code:

```cpp
int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || to_string(i).substr(0, 1) == "1") &&
            (n - 1 >= 0 && i != 1 || n - 1 >= 1 && to_string(n - 1).substr(to_string(n - 1).length() - 1, 1) == "1")) {
            count++;
        }
    }
    return count;
}