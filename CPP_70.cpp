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
    
    std::vector<int> a;
    
    std::cout << "Enter elements for vector 1: " << std::endl; 
    for(int i = 0; i < n1; i++) {
        int temp; 
        while (!(std::cin >> temp)) {
            std::cout << "Invalid input. Please enter an integer." << std::endl;
            std::cin.clear(); // Clear error flags
            std::cin.ignore(1000000, '\n'); // Ignore the rest of the line
        }
        a.push_back(temp);
    }
    
    std::cout << "Enter the size of second vector: ";
    std::cin >> n2;

    std::vector<int> b;
    
    std::cout << "Enter elements for vector 2: " << std::endl; 
    for(int i = 0; i < n2; i++) {
        int temp; 
        while (!(std::cin >> temp)) {
            std::cout << "Invalid input. Please enter an integer." << std::endl;
            std::cin.clear(); // Clear error flags
            std::cin.ignore(1000000, '\n'); // Ignore the rest of the line
        }
        b.push_back(temp);
    }
    
    if(issame(a, b)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
    return 0;