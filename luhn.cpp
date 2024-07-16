#include <vector>
#include <algorithm>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for(int i = 0; i < digits.size(); i++) {
        if(i % 2 == 1) {
            int temp = std::accumulate(std::next(digits.begin(), i), std::next(digits.begin(), i + 1), 0, 
                [&temp](int acc, int digit){acc += digit * 2; return acc > 9 ? acc - 9 : acc;} );
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}