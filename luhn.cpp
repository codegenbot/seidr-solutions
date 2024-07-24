#include <vector>
using namespace std;

int luhnAlgo(vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        if (doubleDigit) {
            int temp = 2 * digits[i];
            if (temp > 9) temp -= 9;
            sum += temp;
        } else
            sum += digits[i];

        doubleDigit = !doubleDigit;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);
    for(int i=0; i<n; ++i) {
        cin >> cards[i];
    }

    cout << luhnAlgo(cards) << endl;

    return 0;
}