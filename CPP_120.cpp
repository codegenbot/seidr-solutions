#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) { ... } 
std::vector<int> maximum(std::vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    return vector<int>(arr.begin(), arr.begin() + k);
}