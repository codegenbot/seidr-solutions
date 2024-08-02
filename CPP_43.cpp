#include <iostream>
#include <vector>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> input;
    int n, num;
    
    std::cout << "Enter the total number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        input.push_back(num);
    }

    if (pairs_sum_to_zero(input)) {
        std::cout << "There exist two numbers whose sum is zero.\n";
    } else {
        std::cout << "No two numbers sum up to zero.\n";
    }

    return 0;
}