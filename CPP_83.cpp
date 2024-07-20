#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (i > 1) {
            for (int j = 1; j <= n; j++) {
                int num = i * pow(10, n - 1);
                if ((num % 10) == 1) {
                    count++;
                }
                else if (j < n) {
                    int digit = (num / pow(10, n - 1)) % 10;
                    num = i * pow(10, j - 1) + digit * pow(10, n - j);
                    for (int k = j; k < n; k++) {
                        if ((num % 10) != 1) {
                            break;
                        }
                        num /= 10;
                        j--;
                    }
                    if (j == 0) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}