#include <iostream>
#include <vector>

int mainProblemCPP120() {
    std::vector<int> vec1(3); // Initialize with 3 elements
    for(int i=0; i<3; i++) {
        vec1[i] = i+1;
    }
    
    std::vector<int> vec2(3, 0); 
    for(int i=0; i<3; i++) {
        vec2[i] = i+1;
    }
    
    if (vec1 == vec2) { // Compare vectors
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }
    
    return 0;
}