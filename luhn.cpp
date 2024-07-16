#include <vector>
using namespace std;

int luhnCheck(vector<int>& creditCard) {
    int sum = 0;
    for(int i = creditCard.size() - 1; i >= 0; i--) {
        if(i % 2 == 1) {
            int digit = creditCard[i] * 2;
            if(digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += creditCard[i];
        }
    }
    return sum;
}

int main() {
    vector<int> creditCard;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        creditCard.push_back(x);
    }
    cout << luhnCheck(creditCard) << endl;
    return 0;
}