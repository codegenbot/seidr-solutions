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

void inputVectors(std::vector<float>& vec1, std::vector<float>& vec2) {
    float num;

    // Input for vector 1
    while(true) {
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); // Reset error state
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            vec1.clear();
            break;
        }
        if (num > 3.4e38) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            vec1.clear();
            break;
        }
        vec1.push_back(num);
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); // Reset error state
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            vec1.clear();
            break;
        }
        if (num > 3.4e38) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            vec1.clear();
            break;
        }
        vec1.push_back(num);
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
    }

    // Input for vector 2
    while(true) {
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); // Reset error state
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            vec2.clear();
            break;
        }
        if (num > 3.4e38) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            vec2.clear();
            break;
        }
        vec2.push_back(num);
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            std::cin.clear(); // Reset error state
            while(std::cin.peek() == '\n' || std::cin.peek() == ' ') { // Consume any whitespace left in the buffer
                std::cin.ignore();
            }
            vec2.clear();
            break;
        }
        if (num > 3.4e38) {
            std::cout << "Invalid input. Please enter a number within the range of float.\n";
            vec2.clear();
            break;
        }
        vec2.push_back(num);
        
        // Ask for next number
        std::cout << "Enter next number (or press Enter to finish): ";
    }

    if(isSame(vec1, vec2)) {
        std::cout << "The two vectors are same.\n";
    } else {
        std::cout << "The two vectors are not same.\n";
    }
}

int main() {
    std::vector<float> vec1, vec2;
    inputVectors(vec1, vec2);
    return 0;
}