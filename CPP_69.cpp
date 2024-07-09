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
    std::cin >> n;

    std::vector<int> lst(n, 0);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num; 

        if (num == 0) {
            // Ask user to enter a different value
            std::cout << "Invalid input. Please enter a non-zero number.\n";
            continue;
        }

        lst[i] = num; 
    }

    int result = search(lst);

    if (result == -1)
        std::cout << "No such number exists in the list.\n";
    else
        std::cout << "The first number that is a multiple of its frequency is: " << result << "\n";

    return 0;
}