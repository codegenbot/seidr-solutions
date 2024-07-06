```cpp
bool same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
        auto it = std::remove(lst.begin(), lst.end(), minVal);
        lst.erase(it, lst.end());
        it = std::remove(lst.begin(), lst.end(), maxVal);
        lst.erase(it, lst.end());
    }

    return result;
}