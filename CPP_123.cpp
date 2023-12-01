#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> collatz;
    collatz.push_back(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        collatz.push_back(n);
    }

    vector<int> oddCollatz;
    for (int num : collatz) {
        if (num % 2 == 1) {
            oddCollatz.push_back(num);
        }
    }

    sort(oddCollatz.begin(), oddCollatz.end());

    return oddCollatz;
}