```cpp
std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> arrCopy = arr;
    std::sort(arrCopy.begin(), arrCopy.end());
    if (k > arrCopy.size()) {
        k = arrCopy.size();
    }
    return arrCopy;
}