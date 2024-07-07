#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || to_string(i).substr(0, 1) == "1") &&
            (n - 1 >= 1 && to_string(n - 1).substr(to_string(n - 1).length() - 1, 1) == "1")) {
            count++;
        }
    }
    for (int i = 10; i <= 9 * n; i++) {
        if ((i / pow(10, floor(log10(i))) == 1 || to_string(i).substr(0, 1) == "1") &&
            (n - 1 >= 1 && to_string(n - 1).substr(to_string(n - 1).length() - 1, 1) == "1")) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}