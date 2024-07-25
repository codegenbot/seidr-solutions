#include <vector>
#include <algorithm>

vector<int> unique_digits(vector<int> b) {
    vector<int> result;
    for (int num : b) {
        int digit = num;
        bool hasEvenDigit = false;
        while (digit > 0) {
            if ((digit % 10) % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            digit /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}