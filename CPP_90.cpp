```
int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1;

    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    auto it = unique(sorted.begin(), sorted.end(), std::greater<int>());
    sorted.erase(it, sorted.end());

    if (sorted.size() < 2)
        return -1;

    return sorted[1];
}