```cpp
#include <iostream>
#include <vector>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2);

int main() {
    long n1;
    while (!(std::cin >> n1)) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> n1;
    }

    long m1 = 0;
    while (!(std::cin >> m1)) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> m1;
    }

    int n2, m2;
    n2 = m1; 
    while (!(std::cin >> n2)) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> n2;
    }

    if (m2 < m1) {
        std::cout << "You need to enter " << m2 - m1 << " more elements.\n";
    } else {
        int temp = -1;
        while (temp == -1) {
            std::cout << "Enter the number of elements in lst2: ";
            try {
                std::cin >> temp;
            } catch (...) {
                std::cout << "Invalid input. Please enter a positive integer: ";
                std::cin.clear();
                std::cin.ignore();
                std::cin >> temp;
            }
        }

        if (temp < m1) {
            std::cout << "You need to enter " << m1 - temp << " more elements.\n";
        } else {
            return 0;
        }
    }

    int m = m2; 
    std::vector<int> lst1 = std::vector<int>();
    lst1.resize(n1);
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
            lst1[i] = temp;
        }
    }

    int m = m2; 
    std::vector<int> lst2 = std::vector<int>();
    lst2.resize(m);
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
            lst2[i] = temp;
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
    if (lst1.size() != lst2.size()) {
        return "Lists are not of the same size";
    }

    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] != lst2[i]) {
            return "Lists are not equal";
        }
    }

    return "Lists are equal";
}