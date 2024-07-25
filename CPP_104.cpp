#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    // function body
}

vector<int> unique_digits(std::vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int temp = num;
        bool hasEvenDigit = false;
        while (temp > 0) {
            if ((temp % 10) % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

assert(issame(unique_digits({135, 103, 31}), {31, 135}));