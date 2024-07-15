#include <vector>

int luhn(std::vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if ((numbers.size() - i) % 2 == 1) { 
            int temp = numbers[i] * 2; 
            if (temp > 9) { 
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += numbers[i]; 
        }
    }
    return sum;