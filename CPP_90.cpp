```
int next_smallest(vector<int> lst) {
    if (lst.size() < 2) {
        return None;
    }
    sort(lst.begin(), lst.end());
    int secondSmallest = lst[1];
    for (int i = 2; i < lst.size(); i++) {
        if (lst[i] != secondSmallest) {
            return secondSmallest;
        }
    }
    return None;
}
```