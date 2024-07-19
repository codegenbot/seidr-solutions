#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; ; i *= 10) {
        if (i > n) break;
        count += 2; // start and end with 1
        if (i / 10 != 0 && (i % 10 == 1 || i / 100 == 1)) {
            count++; // start or end with 1, but not both
        }
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