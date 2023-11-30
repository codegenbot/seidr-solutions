#include <iostream>
#include <vector>
#include <unordered_set>

bool triples_sum_to_zero(vector<int> l) {
    int n = l.size();
    if (n < 3) {
        return false;
    }

    std::unordered_set<int> s;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int target = -(l[i] + l[j]);
            if (s.find(target) != s.end()) {
                return true;
            }
            s.insert(l[j]);
        }
        s.clear();
    }

    return false;
}

int main() {
    std::vector<std::vector<int>> testCases = {
        {1, 3, 5, 0},
        {1, 3, -2, 1},
        {1, 2, 3, 7},
        {2, 4, -5, 3, 9, 7},
        {1}
    };

    for (const auto& testCase : testCases) {
        std::cout << "Input: ";
        for (const auto& num : testCase) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        bool result = triples_sum_to_zero(testCase);
        std::cout << "Output: " << (result ? "true" : "false") << std::endl;
        std::cout << std::endl;
    }

    return 0;
}