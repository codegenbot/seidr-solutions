#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int maximum(const std::vector<int>& vec, int start = 0) {
    if (vec.empty()) 
        return -1;
    else
        return *std::max_element(vec.begin() + start, vec.end());
}

int main() {
    std::vector<int> vec1; 
    for(int i=0; i<3; i++) {
        vec1.push_back(i+1);
    }
    std::vector<int> vec2(3); 
    std::iota(vec2.begin(), vec2.end(), 1);
    
    if (issame(vec1, vec2)) { // Compare vectors
        std::cout << "Vectors are same" << std::endl;
    } else {
        int max = maximum(vec1);
        std::cout << "Maximum element in the vector is: " << max << std::endl;
    }
    
    return 0;
}