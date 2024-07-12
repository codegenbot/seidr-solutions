int findNextSmallest(std::vector<int> lst) {
    if (lst.empty()) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1; 
}

int cpp90Main() {
    assert(findNextSmallest({-35, 34, 12, -45}) == 12);
    return 0;
}