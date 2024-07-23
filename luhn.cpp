```cpp
#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    bool alt = false;
    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i] * (alt ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        alt = !alt;
    }
    return sum;
}

int main() {
    vector<int> card = {3,4,5,9,7,8,6,0,5,5,4,3,2,1,1,4};
    cout << luhn(card);
    return 0;
}