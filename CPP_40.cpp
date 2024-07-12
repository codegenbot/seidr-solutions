#include <vector>

bool checkSumZero(std::vector<int>& l);

bool checkSumZero(std::vector<int>& l) {
    int n = l.size();
    for (std::vector<int>::size_type i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}