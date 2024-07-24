#include <vector>
using namespace std;

int luhn(vector<int>& card) {
    int sum = 0;
    bool isDouble = false;
    
    for(int i = card.size() - 1; i >= 0; --i) {
        if(isDouble) {
            int digit = (card[i] * 2) % 10 + (card[i] * 2) / 10;
            sum += digit;
            isDouble = false;
        } else {
            sum += card[i];
            isDouble = true;
        }
    }

    return sum;
}