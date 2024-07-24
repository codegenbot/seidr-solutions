```cpp
#include <iostream>
#include <vector>

bool checkVectorEquality(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        std::cout << "Error: The two vectors must be the same size." << std::endl;
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            std::cout << "Error: The two vectors are not the same." << std::endl;
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> vec1 = {1,2,3,5};
    std::vector<int> vec2 = {-1,2,3,4};

    if(checkVectorEquality(vec1,vec2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }

    return 0;
}