#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int digit = 0;
        bool has_even_digit = false;
        while (num > 0) {
            digit = num % 10;
            if (digit % 2 == 0) {
                has_even_digit = true;
                break;
            }
            num /= 10;
        }
        if (!has_even_digit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}