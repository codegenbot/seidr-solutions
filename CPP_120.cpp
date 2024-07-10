std::vector<int> maximum(std::vector<int> arr, int k) {
    if (k == 0) return {};
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}