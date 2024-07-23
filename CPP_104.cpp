#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    set<int> uniqueDigits;
    for (int num : x) {
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && uniqueDigits.insert(digit).second)
                uniqueDigits.insert(digit);
            num /= 10;
        }
    }
    vector<int> result(uniqueDigits.begin(), uniqueDigits.end());
    return result;
}