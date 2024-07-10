std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end());
    return sortedArr;
}