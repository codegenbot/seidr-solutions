#include <set>
// ...

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> unique_digits(std::vector<int> x) {
    std::set<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.insert(num);
        }
    }
    std::vector<int> vec(result.begin(), result.end());
    sort(vec.begin(), vec.end());
    return vec;
}