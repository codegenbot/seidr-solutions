bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sortedA = a;
    std::vector<int> sortedB = b;
    std::sort(sortedA.begin(), sortedA.end());
    std::sort(sortedB.begin(), sortedB.end());
    return sortedA == sortedB;
}