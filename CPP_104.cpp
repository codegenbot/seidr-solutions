#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int newNum = 0;
        bool hasEvenDigit = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            newNum = newNum * 10 + digit;
            num /= 10;
        }
        if (!hasEvenDigit)
            result.push_back(newNum);
    }
    sort(result.begin(), result.end());
    return result;
}