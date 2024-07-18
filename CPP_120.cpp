std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> temp_arr = arr;
    std::sort(temp_arr.begin(), temp_arr.end(), std::greater<int>());
    temp_arr.resize(k);
    return temp_arr;
}