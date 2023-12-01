#include <iostream>
#include <vector>
#include <unordered_set>

bool triples_sum_to_zero(vector<int> l) {
    int n = l.size();
    for (int i = 0; i < n-2; i++) {
        std::unordered_set<int> s;
        int target = -l[i];
        for (int j = i+1; j < n; j++) {
            int complement = target - l[j];
            if (s.count(complement)) {
                return true;
            }
            s.insert(l[j]);
        }
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
        std::cout << std::boolalpha << triples_sum_to_zero(testCase) << std::endl;
    }

    return 0;
}