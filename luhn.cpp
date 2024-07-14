#include <vector>
using namespace std;

int luhnAlgorithm(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = digits[i] * 2;
            if (temp > 9)
                sum += (temp % 10) + 9;
            else
                sum += temp;
        } else
            sum += digits[i];
    }
    return sum;
}

int main() {
    vector<int> input;
    int n, num;
    cout << "Enter the number of digits: ";
    cin >> n;
    cout << "Enter the credit card number: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        input.push_back(num);
    }
    cout << "The sum is: " << luhnAlgorithm(input) << endl;
    return 0;
}