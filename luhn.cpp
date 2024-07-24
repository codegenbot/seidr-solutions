#include <vector>
using namespace std;

int luhnCheck(const vector<int>& cardNum) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = cardNum.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int doubled = cardNum[i] * 2;
            if (doubled > 9) {
                sum += (doubled % 10) + 1;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += cardNum[i];
            doubleNext = !doubleNext;
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