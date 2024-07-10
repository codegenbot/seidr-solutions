#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for(int i = 0; i < digits.size(); i++) {
        if(i % 2 == 1) {
            int temp = digits[i] * 2;
            if(temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    // Read input from user
    int n;
    cin >> n;
    vector<int> digits(16);
    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    // Call the luhn function and print the output
    cout << luhn(digits) << endl;

    return 0;
}