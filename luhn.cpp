#include <vector>
using namespace std;

int luhn(vector<int> cardNum) {
    int sum = 0;
    bool alternate = false;
    for (int i = cardNum.size() - 1; i >= 0; --i) {
        int digit = cardNum[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }
    return sum;
}

int main() {
    vector<int> cardNum;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        cardNum.push_back(temp);
    }
    cout << luhn(cardNum) << endl;
    return 0;
}