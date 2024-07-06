int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    auto it = upper_bound(sorted.begin(), sorted.end(), sorted[0]);
    if (it == sorted.end() || it == sorted.begin()) return -1; 
    return *prev(it);
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}