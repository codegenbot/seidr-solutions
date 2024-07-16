#include <vector>
#include <algorithm>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for(int i = 0; i < digits.size(); i++) {
        if(i % 2 == 1) {
            int temp = std::accumulate(std::next(digits.begin(), i), std::next(digits.begin(), i+2), 0) * 2;
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}