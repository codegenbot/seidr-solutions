#include <vector>
using namespace std;

int luhn(vector<int> cardNum) {
    int sum = 0;
    for(int i = cardNum.size() - 1; i >= 0; i--) {
        if(i % 2 == 1) {
            int temp = cardNum[i] * 2;
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cardNum[i];
        }
    }
    return sum;
}