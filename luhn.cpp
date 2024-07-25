#include <vector>
using namespace std;

int luhn(vector<int>& card) {
    int sum = 0;
    bool alternate = false;
    for(int i = card.size() - 1; i >= 0; --i) {
        if(alternate) {
            int temp = card[i] * 2;
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += card[i];
        }
        alternate = !alternate;
    }
    return sum;
}