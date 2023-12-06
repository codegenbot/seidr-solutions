```
int next_smallest(const vector<int>& lst) {
    int min = *std::min_element(lst.begin() + 1, lst.end());
    return std::distance(lst.begin(), min);
}
```