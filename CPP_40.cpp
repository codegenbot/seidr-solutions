#include <iostream>
#include <vector>

bool triples_sum_to_zero(const std::vector<int>& l) {
    int n = l.size();
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }

    if (triples_sum_to_zero(nums)) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }

    return 0;
}