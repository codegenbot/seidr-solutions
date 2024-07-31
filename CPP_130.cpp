#include <vector>
#include <cassert>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b){
        return a == b;
    }

    std::vector<int> tri(int n) {
        std::vector<int> result;
        result.push_back(3);
        for (int i = 1; i < n; ++i) {
            if (i % 2 == 0) {
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
            }
        }
        return result;
    }
}

assert(std::issame(std::tri(2), std::vector<int>{3, 1}));