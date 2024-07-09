Here is the solution:
```c++
bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> s(l.begin(), l.end());
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (s.find(-(*it)) != s.end()) {
            return true;
        }
    }
    return false;
}