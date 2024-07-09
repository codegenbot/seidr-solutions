```cpp
#include <iostream>
#include <vector>

int search(std::vector<int> lst) {
    int result = -1;
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i] == i + 1) {
            result = lst[i];
            break;
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    do {
        if (!(std::cin >> n) || n <= 0) {
            std::cout << "Invalid input. Please enter a positive integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (!(std::cin >> n) || n <= 0);

    std::vector<int> lst;
    for (int i = 0; i < n; ++i) {
        int num; 
        do {
            std::cout << "Enter element " << i + 1 << ": ";
            do {
                std::cin >> num; 
                if(std::cin.fail() || num <= 0) { // Check for invalid input (non-integer or zero)
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the error and discard the input
                    std::cout << "Invalid input. Please enter a positive integer.\n"; // Inform the user of the invalid input
                } else {
                    break; // If the input is valid, exit the loop
                }
            } while(true); // Repeat the process until a valid input is given
        } 
        lst.push_back(num); 
    }

    if(lst.empty()) {
        std::cout << "No such number exists in the list.\n";
    } else {
        int result = search(lst);

        if (result == -1)
            std::cout << "No such number exists in the list.\n";
        else
            std::cout << "The first number that is a multiple of its frequency is: " << result << "\n";
    }

    return 0;
}