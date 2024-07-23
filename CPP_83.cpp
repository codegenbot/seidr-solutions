#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9 && i <= pow(10, n-1); i++) {
        if ((i / pow(10, n - 1)) % 10 == 1 || (i % 10) == 1)
            count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}