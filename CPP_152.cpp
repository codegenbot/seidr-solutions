```cpp
#include <iostream>
#include <vector>
#include <limits>

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
    while (!(std::cin >> n)) {
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear();
        while(std::cin.peek() != '\n') {
            std::cin.ignore(); 
        }
    }

    std::vector<int> vec1;
    int size = 0;
    while (size < n) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            while(std::cin.peek() == '\n') { 
                std::cin.ignore(); 
            }
        }
        vec1.push_back(x); 
        size++;
    }

    std::vector<int> vec2;
    size = 0;
    while (size < n) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            while(std::cin.peek() == '\n') { 
                std::cin.ignore(); 
            }
        }
        vec2.push_back(x); 
        size++;
    }

    bool checkEquality = checkVectorEquality(vec1, vec2);

    if(checkEquality) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }

    return 0;
}