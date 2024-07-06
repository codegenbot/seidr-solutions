#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> lst;
    int num;

    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> num;

        if (num == -1) break;

        lst.push_back(num);
    }

    std::vector<int> result = strange_sort_list(lst);

    for (int n : result) {
        std::cout << n << " ";
    }
    
    return 0;
}

std::vector<int> strange_sort_list(const std::vector<int>& lst) {
    std::vector<int> result;

    for (int num : lst) {
        bool found = false;
        for (int& x : result) {
            if (!issame(num, x)) {
                x = num;
                found = true;
                break;
            }
        }

        if (!found) {
            result.push_back(num);
        }
    }

    return result;
}

bool issame(int a, int b) {
    std::cout << "Check for identical numbers: ";
    for (int i = 0; i < 3; i++) {
        if ((a >> i & 1) != (b >> i & 1)) {
            std::cout << "Numbers are not the same.\n";
            return false;
        }
    }
    std::cout << "Numbers are the same.\n";
    return true;
}