#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a == b);
}

float get_positive(const std::vector<float>& v) {
    float result = 0.0f;
    for(float num : v) {
        if(result < 0.0f || num > result)
            result = num;
    }
    return result;
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
            std::cout << "Enter value " << (i+1) << ": ";
            if (!(std::cin >> num)) {
                std::cout << "Invalid input." << std::endl;
                return 1;
            }
            v1.push_back(num);
            break;
        }
    }

    // Check for same
    for(int i = 0; i < n; i++) {
        float num;
        while(true) {
            std::cout << "Enter value " << (i+1) << ": ";
            if (!(std::cin >> num)) {
                std::cout << "Invalid input." << std::endl;
                return 1;
            }
            v2.push_back(num);
            break;
        }
    }

    bool are_same = issame(v1, v2);

    // Print output
    if (are_same) {
        float result = get_positive(v1);
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }

    return 0;
}