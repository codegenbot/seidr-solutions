```cpp
#include <iostream>
#include <vector>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2);

int main() {
    int n1;
    while (!(std::cin >> n1)) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> n1;
    }

    int m1 = 0;
    while (!(std::cin >> m1)) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> m1;
    }

    if (!(std::cin >> n2)) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
        while (true) {
            std::cout << "Enter the number of elements in lst1: ";
            if (!(std::cin >> m1)) break;
            if (m2 < m1) {
                std::cout << "You need to enter " << m2 - m1 << " more elements.\n";
                break;
            }
        }
    }

    int n2;
    while (!(std::cin >> n2)) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> n2;
    }

    if (m2 < m1) {
        std::cout << "You need to enter " << m2 - m1 << " more elements.\n";
    } else {
        return 0;
    }

    int m2;

    while (!(std::cin >> m2)) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> m2;
    }

    if (m2 < m1) {
        std::cout << "You need to enter " << m2 - m1 << " more elements.\n";
    } else {
        return 0;
    }

    std::vector<int> lst1;
    for (int i = 0; i < n1; i++) {
        int temp = -1;
        while (temp == -1) {
            std::cout << "Enter element of lst1: ";
            try {
                std::cin >> temp;
            } catch (...) {
                std::cout << "Invalid input. Please enter an integer: ";
                std::cin.clear();
                std::cin.ignore();
                std::cin >> temp;
            }
        }
        if (temp != 0) {
            lst1.push_back(temp);
        }
    }

    int m = m2; 
    std::vector<int> lst2;
    for (int i = 0; i < m; i++) {
        int temp = -1;
        while (temp == -1) {
            std::cout << "Enter element of lst2: ";
            try {
                std::cin >> temp;
            } catch (...) {
                std::cout << "Invalid input. Please enter an integer: ";
                std::cin.clear();
                std::cin.ignore();
                std::cin >> temp;
            }
        }
        if (temp != 0) {
            lst2.push_back(temp);
        }
    }

    if(lst2.size() != m) {
        std::cout << "You need to enter " << m - lst2.size() << " more elements.\n";
    } else {
        std::string result = exchange(lst1, lst2);
        std::cout << result << std::endl;
    }
}

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2) {
    int oddCount = 0;
    for (int i : lst1) {
        if (i % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount > 0) {
        return "Odd";
    } else {
        return "Even";
    }
}