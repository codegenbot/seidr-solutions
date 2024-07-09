#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL; i++) {
        if (i == 1 || i == to_string(i).size() * '1' + '0') {
            count += 1LL;
        }
    }
    for (int len = 2; len < n; len++) {
        for (long long i = 10LL; i <= 9LL * pow(10, len - 1); i++) {
            if (i == to_string(i)[0] - '0' || i == to_string(i).back() - '0') {
                count += 1;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of the numbers of " << n << "-digit positive integers that start or end with 1: " << starts_one_ends(n) << endl;
    return 0;
}