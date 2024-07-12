#include <iostream>
#include <vector>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2);

int main() {
    int n1 = 0;
    bool flag = false;
    while (flag == false) {
        try {
            std::cout << "Enter the number of elements in lst1: ";
            std::cin >> n1;
            flag = true;
        } catch (...) {
            std::cout << "Invalid input. Please enter a positive integer: ";
            std::cin.clear();
            std::cin.ignore();
        }
    }

    int m1 = 0;
    flag = false;
    while (flag == false) {
        try {
            std::cout << "Enter the number of elements in lst2: ";
            std::cin >> m1;
            flag = true;
        } catch (...) {
            std::cout << "Invalid input. Please enter a positive integer: ";
            std::cin.clear();
            std::cin.ignore();
        }
    }

    int n2 = 0;
    flag = false;
    while (flag == false) {
        try {
            std::cout << "Enter the number of elements in lst1: ";
            std::cin >> n2;
            flag = true;
        } catch (...) {
            std::cout << "Invalid input. Please enter a positive integer: ";
            std::cin.clear();
            std::cin.ignore();
        }
    }

    if (m1 < n1) {
        std::cout << "You need to enter " << n1 - m1 << " more elements.\n";
    } else {
        return 0;
    }

    int m2 = 0;
    flag = false;
    while (flag == false) {
        try {
            std::cout << "Enter the number of elements in lst2: ";
            std::cin >> m2;
            flag = true;
        } catch (...) {
            std::cout << "Invalid input. Please enter a positive integer: ";
            std::cin.clear();
            std::cin.ignore();
        }
    }

    if (m2 < n1) {
        std::cout << "You need to enter " << n1 - m2 << " more elements.\n";
    } else {
        return 0;
    }

    std::vector<int> lst1;
    for (int i = 0; i < n1; i++) {
        int temp = 0;
        do {
            try {
                std::cout << "Enter element of lst1: ";
                std::cin >> temp;
            } catch (...) {
                std::cout << "Invalid input. Please enter an integer: ";
                std::cin.clear();
                std::cin.ignore();
            }
        } while (temp == 0);
        if (temp != 0) {
            lst1.push_back(temp);
        }
    }

    int m = m2; 
    std::vector<int> lst2;
    for (int i = 0; i < m; i++) {
        int temp = 0;
        do {
            try {
                std::cout << "Enter element of lst2: ";
                std::cin >> temp;
            } catch (...) {
                std::cout << "Invalid input. Please enter an integer: ";
                std::cin.clear();
                std::cin.ignore();
            }
        } while (temp == 0);
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