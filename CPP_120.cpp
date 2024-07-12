#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int mainProblemCPP120() {
    std::vector<int> vec1; 
    for(int i=0; i<3; i++) {
        vec1.push_back(i+1);
    }
    std::vector<int> vec2(3); 
    std::iota(vec2.begin(), vec2.end(), 1);
    
    if (isSame(vec1, vec2)) { // Compare vectors
        std::cout << "Vectors are same" << std::endl;
    } else {
        int maximum = *std::max_element({1, 2, 3, -23, 243, -400, 0});
        std::cout << "Maximum element in the vector is: " << maximum << std::endl;
    }
    
    return 0;
}