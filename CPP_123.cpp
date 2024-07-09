#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> sequence;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        sequence.push_back(n);
    }
    vector<int> oddNumbers;
    for (int i : sequence) {
        if (i % 2 != 0) {
            oddNumbers.push_back(i);
        }
    }
    sort(oddNumbers.begin(), oddNumbers.end());
    return oddNumbers;
}