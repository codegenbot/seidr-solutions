#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        if ((card[i] * 2) > 9) {
            sum += (card[i] * 2) - 9;
        } else {
            sum += card[i] * 2;
        }
        sum += card[15-i];
    }
    return sum;
}