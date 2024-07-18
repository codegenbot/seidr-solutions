#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b);

std::vector<int> unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            if (temp % 10 % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end(), issame);
    return result;
}

int main() {
    std::vector<int> expected_result = {31, 135};
    std::vector<int> input = {135, 103, 31};
    std::vector<int> result = unique_digits(input);
    assert(result == expected_result);
    return 0;
}

bool issame(int a, int b) {
    return a < b;
}