#include <vector>
#include <algorithm>
#include <numeric>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b){
        return a == b;
    }
}

std::vector<int> sort_array(std::vector<int> arr){
    std::sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = std::__builtin_popcount(a);
        int countB = std::__builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}