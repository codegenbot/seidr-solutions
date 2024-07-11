
int maximum(std::vector<int> v, int n) {
    std::sort(v.begin(), v.end(), std::greater<int>());
    return {v.begin(), v.begin() + n};
}