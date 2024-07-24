```cpp
#include <iostream>
#include <vector>
#include <algorithm>

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

    // Input for vector 1
    std::cout << "Enter the elements of vector 1 (separated by space): ";
    int num;
    while(true) {
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            vec1.clear();
            break;
        }
        if (num >= -2147483648 && num <= 2147483647) { 
            vec1.push_back((float)num);
        } else {
            std::cout << "Invalid input. Please enter an integer within the range of INT_MIN and INT_MAX.\n";
            vec1.clear();
            break;
        }
        // Read the space to process the next number
        if (!(std::cin >> ws).good()) {
            break; // No more numbers in the stream
        }
    }

    // Input for vector 2
    std::cout << "\nEnter the elements of vector 2 (separated by space): ";
    while(true) {
        if (!(std::cin >> num)) {
            std::cout << "Invalid input. Please enter a valid number.\n";
            vec2.clear(); 
            break;
        }
        if (num >= -2147483648 && num <= 2147483647) { 
            vec2.push_back((float)num);
        } else {
            std::cout << "Invalid input. Please enter an integer within the range of INT_MIN and INT_MAX.\n";
            vec2.clear();
            break;
        }
        // Read the space to process the next number
        if (!(std::cin >> ws).good()) {
            break; // No more numbers in the stream
        }
    }

    if(isSame(vec1, vec2)) {
        std::cout << "The two vectors are same.\n";
    } else {
        std::cout << "The two vectors are not same.\n";
    }
}