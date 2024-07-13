#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        if ((i % 2 == 1)) {
            int double_val = card[i] * 2;
            if (double_val > 9)
                sum += double_val - 9;
            else
                sum += double_val;
        } else {
            sum += card[i];
        }
    }
    return sum;
}