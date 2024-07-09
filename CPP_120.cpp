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

int main() {
    if(maximum({1, 2, 3, -23, 243, -400, 0}, 7) != vector<int>({0, 2, 3})) {
        return 1;
    }
    return 0;
}