Here's the completed code:

```cpp
bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i-1]) continue;
        int count = 0;
        for (int j = 0; j < i; j++) {
            if (lst[j] == lst[i]) count++;
        }
        return false;
    }
    return true;
}