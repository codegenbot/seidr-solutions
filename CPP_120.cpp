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
    std::vector<int> vec1; 
    for(int i=0; i<3; i++) {
        vec1.push_back(i+1);
    }
    std::vector<int> vec2(3); 
    std::iota(vec2.begin(), vec2.end(), 1);
    if (issame(vec1, vec2)) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not same" << std::endl;
    }
    
    return 0;
}