#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL && i <= (n - 1); i++) {
        if ((i == 1 || to_string(i).substr(0, 1) == "1") &&
            (i == n || to_string(i).substr(to_string(i).length() - 1, 1) == "1")) {
            count++;
        }
    }
    for (long long i = 10; i <= 9LL * (n - 1); i++) {
        if ((i / 10 == 1 || to_string(i).substr(0, 1) == "1") &&
            (i % 10 == 1 || to_string(i).substr(to_string(i).length() - 1, 1) == "1")) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Number of n-digit integers that start or end with 1: " << starts_one_ends(n) << endl;
    return 0;
}