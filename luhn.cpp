#include <vector>
using namespace std;

int luhn(vector<int> numbers) {
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++) {
        if(i % 2 == 1) {
            int doubleNumber = numbers[i] * 2;
            if(doubleNumber > 9) {
                doubleNumber -= 9;
            }
            sum += doubleNumber;
        } else {
            sum += numbers[i];
        }
    }
    return sum;
}