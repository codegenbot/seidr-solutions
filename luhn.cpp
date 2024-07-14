#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        if ((card[i] * 2) > 9) {
            sum += (card[i] * 2) - 9;
        } else {
            sum += card[i] * 2;
        }
        if (i % 2 != 0) {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    vector<int> card = {3,4,5,1,3,8,6,7,9,0,8,6,7,3,5};
    cout << luhn(card);
    return 0;
}