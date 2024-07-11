Here is the completed code:

```cpp
vector<int> strange_sort_list(vector<int> lst) {
    if (lst.empty()) return {};
    vector<int> result;
    bool start_min = true;
    while (!lst.empty()) {
        int val;
        if (start_min) {
            val = *min_element(lst.begin(), lst.end());
            start_min = false;
        } else {
            val = *max_element(lst.begin(), lst.end());
            start_min = true;
        }
        result.push_back(val);
        lst.erase(std::remove(lst.begin(), lst.end(), val), lst.end());
    }
    return result;
}