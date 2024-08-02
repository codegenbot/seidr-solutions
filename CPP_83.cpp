#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            count += pow(10, n - 1);
        } else {
            for (int j = 1; j < 10; j++) {
                if (j == 1 || j == 9) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}