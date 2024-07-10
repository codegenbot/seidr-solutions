```cpp
#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= pow(10, n-1); i++) {
        string str;
        bool start_with_one = false, end_with_one = false;

        for (int j = 0; j < n; j++) {
            if ((i % 2 == 0) && j == 0) {
                start_with_one = true;
            }
            str += (i % 2 == 0) ? '1' : '0';
        }

        for (int j = n - 1; j >= 0; j--) {
            if ((i % 2 == 0) && j == n - 1) {
                end_with_one = true;
            }
            str += (i % 2 == 0) ? '1' : '0';
        }

        if ((start_with_one || i == 1) && (end_with_one || i == pow(10, n-1))) {
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
}