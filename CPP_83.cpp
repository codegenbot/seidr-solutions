```cpp
#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        if ((i / pow(10, (log10(i))) % 10 == 1) || (i % 10 == 1))
            count++;
    }
    return count;
}