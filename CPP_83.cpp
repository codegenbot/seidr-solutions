#include <cmath>
#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9 && i <= n; i++) {
        if (i == 1 || i % 10 == 1 || i / pow(10, (log10(n))) == 1)
            count++;
        for (long long j = i + 1; j <= n; j++) {
            if (j % 10 == 1 || j / pow(10, (log10(j))) == 1)
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