#include <vector>
using namespace std;

int luhn(vector<int> &cardNumber) {
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; --i) {
        if(i % 2 == 1) {
            int temp = cardNumber[i] * 2;
            if(temp > 9)
                sum += (temp % 10) + 1;
            else
                sum += temp;
        } else
            sum += cardNumber[i];
    }
    return sum;
}