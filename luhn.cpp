#include <vector>
using namespace std;

int luhn(vector<int> numbers) {
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++) {
        if(i % 2 == 1) {
            int temp = numbers[i] * 2;
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += numbers[i];
        }
    }
    return sum;
}