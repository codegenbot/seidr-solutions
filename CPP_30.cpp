#include <iostream>
#include <vector>
#include <limits>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a == b);
}

int main() {
    int n;
    while(true) {
        std::cout << "Enter the number of values: ";
        if (!(std::cin >> n)) {
            std::cout << "Invalid input for the number." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    std::vector<float> v1, v2;
    int i = 0;
    while(i < n) {
        float num;
        for(int j = 0; j < 3 && true; j++) { // Limit the number of attempts
            std::cout << "Enter value " << (i+1) << ": ";
            if (!(std::cin >> num)) {
                std::cout << "Invalid input." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                v1.push_back(num);
                break; // Loop until valid input
            }
        }
        for(int j = 0; j < 3 && true; j++) { 
            std::cout << "Enter value " << (i+1) << ": ";
            if (!(std::cin >> num)) {
                std::cout << "Invalid input." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                v2.push_back(num);
                break; // Loop until valid input
            }
        }
        i++;
    }

    bool are_same = issame(v1, v2);

    if (are_same) {
        float result = 0.0f;
        for(float num : v1) {
            if(result < 0.0f || num > result)
                result = num;
        }
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }

    return 0;
}