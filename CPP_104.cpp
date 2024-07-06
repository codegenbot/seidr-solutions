#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int i : x) {
        bool hasEvenDigit = false;
        int n = i;
        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            n /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    return result;
}