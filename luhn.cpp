#include <vector>

int luhn(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        int num = numbers[i] * ((i % 2) + 1);
        if (num > 9) { 
            num -= 9;
        }
        sum += num; 
    }
    return sum;
}