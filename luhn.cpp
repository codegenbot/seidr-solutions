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
    for(int i = 0; i < 16; i++) {
        cin >> digits[i];
    }

    // Calculate the result using Luhn's algorithm
    int result = luhn(digits);

    // Print the output
    cout << result << endl;

    return 0;
}