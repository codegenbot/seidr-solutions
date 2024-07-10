Here is the solution:

```cpp
vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.rbegin());
        lst.pop_back();
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }
    return result;
}