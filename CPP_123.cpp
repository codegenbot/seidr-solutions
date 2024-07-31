#include <vector>
#include <algorithm>

int countUniquePairs(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    int uniquePairs = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (i == 0 || a[i] != a[i - 1]) {
            for (int j = 0; j < b.size(); ++j) {
                if (j == 0 || b[j] != b[j - 1]) {
                    if (a[i] == b[j]) {
                        ++uniquePairs;
                        break;
                    }
                }
            }
        }
    }
    return uniquePairs;
}