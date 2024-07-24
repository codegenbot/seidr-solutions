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
    for(int i = 0; i < 5 && (std::cin >> num); i++) {
        if(num > std::numeric_limits<float>::max()) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            break;
        }
        vec1.push_back(num);
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
    }

    int maxInputCount = 5; 
    int inputCount = 0;
    for(int i = 0; i < maxInputCount && (std::cin >> num); i++) {
        if(num > std::numeric_limits<float>::max()) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            break;
        }
        vec2.push_back(num);
        
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