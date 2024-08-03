std::vector<int> minimum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end());
    arr.resize(k);
    return arr;
}