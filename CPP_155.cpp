#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> even_odd_count(int num) {
    int even_count = 0, odd_count = 0;
    num = abs(num);
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        num /= 10;
    }
    if (num == 0) even_count++; // Special case for 0
    return {even_count, odd_count};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0})); // Fixed to {1, 0} since 0 is considered even
    assert(issame(even_odd_count(123456), {3, 3}));
    assert(issame(even_odd_count(2468), {4, 0}));
    assert(issame(even_odd_count(13579), {0, 5}));
    cout << "All test cases passed!\n";
    return 0;
}