```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-5) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> vec1, vec2;
    std::string tempLine;

    // Input for vector 1
    std::cout << "Enter the elements of vector 1 (separated by space): ";
    float num;
    while(true) {
        if (!(std::cin >> std::stod(std::cin.peek(), &num))) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); // Reset error state
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            vec1.clear();
            break;
        }
        vec1.push_back(num);
    }

    // Input for vector 2
    std::cout << "\nEnter the elements of vector 2 (separated by space): ";
    while(true) {
        if (!(std::cin >> std::stod(std::cin.peek(), &num))) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); // Reset error state
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            vec2.clear();
            break;
        }
        vec2.push_back(num);
    }

    if(isSame(vec1, vec2)) {
        std::cout << "The two vectors are same.\n";
    } else {
        std::cout << "The two vectors are not same.\n";
    }
}