```cpp
#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }

    // Check if the first occurrence of each number is less than its frequency
    for (const auto& pair : freq) {
        if (pair.second >= pair.first && pair.first > 0) {
            return pair.first * pair.second;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst;
    lst.resize(n, 0); // Initialize all new elements with a default value

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num; // Take input as integer

        if (num == 0) {
            // Ask user to enter a different value
            std::cout << "Invalid input. Please enter a non-zero number.\n";
            continue;
        }

        lst[i] = num; // Store the valid input into vector
    }

    int result = search(lst);

    if (result == -1)
        std::cout << "No such number exists in the list.\n";
    else
        std::cout << "The first number that is a multiple of its frequency is: " << result << "\n";

    return 0;
}