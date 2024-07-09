#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    if(k > arr.size()) {
        std::cout << "Invalid value of k. It must be less than or equal to the size of array." << std::endl;
        return {};
    }
    
    std::vector<int> result(arr.begin(), arr.begin() + k);
    std::sort(result.begin(), result.end());
    bool areUnique = true;
    for(int i = 1; i < result.size(); ++i) {
        if(result[i] == result[i - 1]) {
            areUnique = false;
            break;
        }
    }
    return areUnique ? result : {};
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 7) == std::vector<int>({0, 2, 3}));
    return 0;
}