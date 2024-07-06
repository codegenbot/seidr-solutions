Here's the completed code:

```cpp
bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] >= lst[i-1]) return false;
    }
    vector<int> counts(lst.size(), 0);
    for(int num : lst) {
        ++counts[num];
    }
    for(int i = 1; i < counts.size(); i++) {
        if(counts[i] > 1) return false;
    }
    return true;
}