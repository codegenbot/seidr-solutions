#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<int> x = {123, 456, 789};
    std::vector<int> result;

    for (int num : x) {
        int temp = num;
        bool hasEvenDigit = false;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
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