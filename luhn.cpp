#include <vector>
using namespace std;

int luhn(vector<int> numbers) {
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++) {
        if(i % 2 == 1) {
            int doubledNumber = numbers[i] * 2;
            if(doubledNumber > 9) {
                doubledNumber -= 9;
            }
            sum += doubledNumber;
        } else {
            sum += numbers[i];
        }
    }
    return sum;
}