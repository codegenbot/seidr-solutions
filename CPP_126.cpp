Here's the completed code:

```cpp
bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) return true; // If the list has one or zero elements, it is sorted.
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i-1]) continue;
        for (int j = i+1; j < lst.size(); j++) {
            if (lst[j] == lst[i]) return false; // If there's a duplicate, the list is not sorted.
        }
        return false;
    }
    return true;
}