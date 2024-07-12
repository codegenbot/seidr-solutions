```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int mainProblemCPP120() {
    // Create vector with custom allocator
    std::vector<int> vec1; 
    for(int i=0; i<3; i++) {
        vec1.push_back(i+1);
    }
    
    // Use standard library allocator (which does not have this problem)
    std::vector<int> vec2(std::vector<int>::allocator_type(), 3, 0); 
    for(int i=0; i<3; i++) {
        vec2[i] = i+1;
    }

    if (issame(vec1, vec2)) { // Compare vectors
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }
    
    return 0;
}