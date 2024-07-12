#include <iostream>
#include <vector>
#include <algorithm>

int maximumSubarray(const std::vector<int>& arr) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > 0)
            current_sum += arr[i];
        else
            current_sum = arr[i];

        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    return max_sum;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
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