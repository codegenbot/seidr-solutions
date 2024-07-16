#include <vector>
#include <algorithm>
#include <cassert>

vector<int> unique_digits(const vector<int>& x) {
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
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

int main() {
    vector<int> input = {123, 456, 789, 246};
    vector<int> output = unique_digits(input);
    vector<int> expected = {123, 789};

    assert(output == expected);

    return 0;
}