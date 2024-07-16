```cpp
#include <vector>
#include <iostream> 
using namespace std;

int luhnCheck(vector<int> cardNum) {
    int sum = 0;
    for (int i = cardNum.size() - 1; i >= 0; i--) {
        if ((i % 2 == 0 && cardNum[i] * 2 > 9) || (i % 2 != 0 && cardNum[i] > 9)) {
            sum += (cardNum[i] * 2) - 9;
        } else {
            sum += cardNum[i] * 2;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNum(n);
    for (int i = 0; i < n; i++) {
        cin >> cardNum[i];
    }
    cout << luhnCheck(cardNum) << endl;
    return 0;
}