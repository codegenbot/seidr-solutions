#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> vec1, std::vector<int> vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
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
        auto max = *std::max_element({1, 2, 3, -23, 243, -400, 0});
        std::cout << "Maximum element in the vector is: " << max << std::endl;
    }
    
    return 0;
}