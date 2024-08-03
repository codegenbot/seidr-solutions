#include <vector>
using namespace std;

int luhn(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        int digit = numbers[i];
        if ((i % 2 == 1 && digit * 2 > 9) || i % 2 == 0) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return sum;
}