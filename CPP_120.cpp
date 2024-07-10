#include <vector>
#include <algorithm>

bool issame(std::vector<int> arr) {
    if(arr.empty()) return true;
    return std::all_of(arr.begin(), arr.end(), [&](int num){return num == arr[0];});
}

std::vector<int> max(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}