#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2) == 1) {
            int temp = digits[i] * 2;
            if (temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += digits[i];
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    cout << luhn(input) << endl;
    return 0;
}