#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b);

bool unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        int temp = num;
        bool hasEvenDigit = false;
        while (temp > 0) {
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}