```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximumSubarray(std::vector<int> arr) {
    std::vector<int> result(arr.begin(), arr.end());
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> vec1(3); 
    vec1[0] = 1; vec1[1] = 2; vec1[2] = 3; 
    std::vector<int> vec2(3);
    vec2[0] = 1; vec2[1] = 2; vec2[2] = 3;
    if (issame(vec1, vec2)) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not same" << std::endl;
    }
    
    return 0;
}