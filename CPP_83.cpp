#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= (long long) pow(10, n-1); i++) {
        if ((i / (long long) pow(10, (n - 1) / 2)) % 10 == 1 || i % 10 == 1)
            count++;
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