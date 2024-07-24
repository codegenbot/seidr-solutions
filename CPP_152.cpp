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
    int n;
    std::cout << "Enter the number of elements for both vectors: ";
    std::cin >> n;

    std::vector<int> vec1(n, 0); 
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        vec1[i] = x; 
    }

    std::vector<int> vec2(n, 0); // Initialize with size 'n' and default value 0
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        vec2[i] = x; 
    }

    bool checkEquality = true;
    for(int i = 0; i < n; i++) {
        if(vec1[i] != vec2[i]) {
            checkEquality = false;
            break;
        }
    }

    if(checkEquality) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }

    return 0;
}