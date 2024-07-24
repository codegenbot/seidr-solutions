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
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::vector<int> vec1(n);
    int size = 0;
    while (size < n) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vec1[size] = x; 
        size++;
    }

    std::vector<int> vec2(n);
    size = 0;
    while (size < n) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vec2[size] = x; 
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