#include <iostream>
#include <vector>
#include <pmr/pool.h> // add this line
#include <memory>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximumSubarray(std::vector<int> arr) {
    int max_sum = 0;
    int current_sum = 0;
    for (int i : arr) {
        if (current_sum < 0)
            current_sum = i;
        else
            current_sum += i;
        if (max_sum < current_sum)
            max_sum = current_sum;
    }
    return {};
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