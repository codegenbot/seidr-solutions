#include <vector>
using namespace std;

int luhnAlgorithm(vector<int> cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        if ((i % 2) == 1) {
            int temp = cardNumber[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cardNumber[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNumber(n);
    for(int i = 0; i < n; i++) {
        cin >> cardNumber[i];
    }
    cout << luhnAlgorithm(cardNumber) << endl;
    return 0;
}