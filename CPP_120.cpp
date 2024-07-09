#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    if(k > arr.size()) {
        std::cout << "Invalid value of k. It must be less than or equal to the size of array." << std::endl;
        return {};
    }
    
    std::vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}