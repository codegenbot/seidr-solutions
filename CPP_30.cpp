```cpp
#include <iostream>
#include <vector>
#include <limits>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a == b);
}

int main() {
    std::vector<float> v1, v2;
    int n;
    std::cout << "Enter the number of values: ";
    if (!(std::cin >> n)) {
        std::cout << "Invalid input for the number." << std::endl;
        return 1;
    }
    
    // Read input and check for same
    for(int i = 0; i < n; i++) {
        float num;
        while(true) {
            try {
                std::cout << "Enter value " << (i+1) << ": ";
                if (!(std::cin >> num)) {
                    throw std::invalid_argument("Invalid input.");
                }
            } catch(const std::exception& e) {
                std::cout << "Invalid input." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return 1;
            }
            v1.push_back(num);
        }
    }

    // Read input for v2
    v2 = v1;  // Since both are the same set, just copy v1 to v2

    bool are_same = (v1 == v2);

    // Print output
    if (are_same) {
        float result = *std::max_element(v1.begin(), v1.end());
        std::cout << "The maximum of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }

    return 0;
}