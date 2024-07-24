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
    int maxInputCount = 5; 
    int inputCount = 0;
    while(true) {
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); 
            while(std::cin.fail()) std::cin.clear(); 
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            if(inputCount >= maxInputCount) break; 
            break;
        }
        if(num > std::numeric_limits<float>::max()) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            if(inputCount >= maxInputCount) break; 
            break;
        }
        if (num <= std::numeric_limits<float>::max()) {
            vec1.push_back(num);
        } else {
            std::cout << "Invalid input. Number exceeds maximum limit of float.\n";
            if(inputCount >= maxInputCount) break; 
            break;
        }
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
        inputCount++;
    }

    while(inputCount < maxInputCount) {
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); 
            while(std::cin.fail()) std::cin.clear(); 
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            break;
        }
        if(num > std::numeric_limits<float>::max()) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            break;
        }
        if (num <= std::numeric_limits<float>::max()) {
            vec2.push_back(num);
        } else {
            std::cout << "Invalid input. Number exceeds maximum limit of float.\n";
            break;
        }
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
        inputCount++;
    }

    if(vec1.size() > 0 && vec2.size() > 0) {
        if(sameVectors(vec1, vec2)) {
            std::cout << "The two vectors are same.\n";
        } else {
            std::cout << "The two vectors are not same.\n";
        }
    }
}