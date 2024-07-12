```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximumSubarray(std::vector<int> arr, int k);

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};
    if (issame(vec1, vec2)) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not same" << std::endl;
    }
    
    // You also need to call the maximumSubarray function and print its result
    std::vector<int> vec3 = {1, 2, -3, 3, 4, 10, -8, 0, 11};
    int k = 4;
    vec3 = maximumSubarray(vec3, k);
    for(int i:vec3) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

std::vector<int> maximumSubarray(std::vector<int> arr, int k) {
    if(k > arr.size()) k = arr.size();
    std::vector<int> result(arr.begin(), arr.begin() + k);
    std::sort(result.begin(), result.end());
    return result;
}