```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

bool sameVectors(std::vector<float> a, std::vector<float> b) {
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

    // Input for vector 1
    float num;
    while(true) {
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); 
            while(std::cin.fail()) std::cin.clear(); 
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            vec1.clear();
            break;
        }
        if(num > std::numeric_limits<float>::max()) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            vec1.clear();
            break;
        }
        vec1.push_back(num);
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
    }

    int maxInputCount = 5; 
    int inputCount = 0;
    float num;

    while(inputCount < maxInputCount) {
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); 
            while(std::cin.fail()) std::cin.clear(); 
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            vec2.clear();
            break;
        }
        if(num > std::numeric_limits<float>::max()) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            vec2.clear();
            break;
        }
        vec2.push_back(num);
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
        inputCount++;
        
        // Check if the maximum count is reached, break the loop if yes
        if(inputCount >= maxInputCount) {
            break;
        }
    }

    if(vec1.size() > 0 && vec2.size() > 0) {
        if(sameVectors(vec1, vec2)) {
            std::cout << "The two vectors are same.\n";
        } else {
            std::cout << "The two vectors are not same.\n";
        }
    }
}