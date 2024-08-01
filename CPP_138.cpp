#include <iostream>

using namespace std;

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n / 2 && !found; i += 2) {
        found = false;
        int sum = 0;
        for (int j = 2; j <= n / 2 && !found; j += 2) {
            if (i + j > n) break;
            if (i + j == n) {
                found = true;
                sum = i + j;
            } else if (sum < n) {
                sum += j;
            }
        }
    }
    return found;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (is_equal_to_sum_even(n))
        cout << "The given number can be written as the sum of exactly 4 positive even numbers." << endl;
    else
        cout << "The given number cannot be written as the sum of exactly 4 positive even numbers." << endl;
    return 0;
}