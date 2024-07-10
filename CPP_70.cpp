```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;

}

int main() {
    int n1, n2;
    
    std::cout << "Enter the size of first vector: ";
    std::cin >> n1;

    std::vector<int> vec1(n1);

    std::cout << "Enter elements for vector 1: " << std::endl; 

    for(int i = 0; i < n1; i++) {
        int temp; 
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> temp;
        vec1[i] = temp;
    }
    
    std::cout << "Enter the size of second vector: ";
    std::cin >> n2;

    std::vector<int> vec2(n2);

    std::cout << "Enter elements for vector 2: " << std::endl; 

    for(int i = 0; i < n2; i++) {
        int temp; 
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> temp;
        vec2[i] = temp;
    }
    
    if(issame(vec1, vec2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;
}