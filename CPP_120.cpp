#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    sort(a.begin(), a.end(), greater<int>());
    return std::vector<int>(a.begin(), a.begin() + b);
}

std::vector<int> maximum(std::vector<int> arr, int k){
    sort(arr.begin(), arr.end(), greater<int>());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}