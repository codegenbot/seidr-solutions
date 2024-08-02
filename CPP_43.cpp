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
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }

    if (pairs_sum_to_zero(input)) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }

    return 0;
}