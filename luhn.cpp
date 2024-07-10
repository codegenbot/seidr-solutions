#include <vector>
using namespace std;

int luhn(const vector<int>& card) {
    int sum = 0;
    for(int i = 0; i < card.size(); ++i) {
        if(i % 2 == 1) {
            int digit = card[i] * 2;
            if(digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += card[i];
        }
    }
    return sum;
}