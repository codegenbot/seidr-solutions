Here is the completed code:
```c++
bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> s(l.begin(), l.end());
    for (int i = 0; i < l.size(); i++) {
        int target = -l[i];
        if (s.count(target) && l[i] != target) {
            return true;
        }
    }
    return false;
}