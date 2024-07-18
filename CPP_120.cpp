#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
} 
std::vector<int> fixCode(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}