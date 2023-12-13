#include <vector>
using std::vector;

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result;
    int countEven = 0, countOdd = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
        num /= 10;
    }
    result.push_back(countEven);
    result.push_back(countOdd);
    return result;
}