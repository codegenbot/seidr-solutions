#include <vector>
using namespace std;

int luhnCheck(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if ((i % 2) == 1) {
            int temp = numbers[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += numbers[i];
        }
    }
    return sum;
}

int main() {
    int n, num;
    vector<int> cardNumber;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        cardNumber.push_back(num);
    }

    cout << luhnCheck(cardNumber) << endl;

    return 0;
}