```cpp
bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) return false;
    }
    vector<int> copy(lst);
    sort(copy.begin(), copy.end());
    return copy == lst && unique(copy.begin(), copy.end()) == copy.end();
}