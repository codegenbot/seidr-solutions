std::vector<int> maximum(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end());
    arr.resize(k);
    return arr;
}