#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        if ((i % 2 == 1)) { // double every other digit starting with the second digit
            int doubled = card[i] * 2;
            if (doubled > 9) { // if any of the results are over 9, subtract 9 from them
                doubled -= 9;
            }
            sum += doubled;
        } else {
            sum += card[i];
        }
    }
    return sum;
}