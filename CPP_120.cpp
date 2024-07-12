#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int maximum(const std::vector<int>& v, int def) {
    int max = def;
    for (int i : v) {
        if (i > max) {
            max = i;
        }
    }
    return max;
}

int mainProblemCPP120() {
    std::vector<int> vec1(3); // Initialize with 3 elements
    for(int i=0; i<3; i++) {
        vec1[i] = i+1;
    }
    
    std::vector<int> vec2(3, 0); 
    for(int i=0; i<3; i++) {
        vec2[i] = i+1;
    }
    
    if (issame(vec1, vec2)) { // Compare vectors
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }

    int max = maximum({1, 2, 3, -23, 243, -400, 0}, 0);
    if (issame(std::vector<int>(std::begin({1, 2, 3, -23, 243, -400, 0}), std::end({1, 2, 3, -23, 243, -400, 0})), std::vector<int>())) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }
    
    return 0;
}