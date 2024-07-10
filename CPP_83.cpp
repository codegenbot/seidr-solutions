#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        if (i == 1 || i == n) {
            count++;
        }
    }
    for (int i = 10; i <= pow(10, n - 1); ++i) {
        int num = i;
        bool start_with_one = false, end_with_one = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit == 1) {
                start_with_one = true;
            }
            num /= 10;
        }
        if (start_with_one || i % 10 == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}