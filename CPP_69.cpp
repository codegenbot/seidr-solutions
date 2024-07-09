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
    while (!(std::cin >> n) || n <= 0) {
        if (!std::cin)
            std::cout << "Invalid input. Please enter a positive integer.\n";
        else
            std::cout << "Please enter a positive integer greater than zero.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        int num;
        while (!(std::cout << "Enter element " << i + 1 << ": ")) {
            if (!std::cin)
                std::cout << "Invalid input. Please enter a positive integer.\n";
            else
                std::cout << "Please enter a positive integer greater than zero.\n";
            std::cin.clear();
            while (std::cin.get() != '\n') {}
        }
        while (!(std::cin >> num) || (num <= 0)) {
            if (!std::cin)
                std::cout << "Invalid input. Please enter a positive integer greater than zero.\n";
            else
                std::cout << "Please enter a positive integer greater than zero.\n";
            std::cin.clear();
            while (std::cin.get() != '\n') {}
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