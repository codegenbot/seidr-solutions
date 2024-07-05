#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num) {
    int even_count = 0, odd_count = 0;
    num = abs(num); // Handle negative numbers
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        num /= 10;
    }
    return {even_count, odd_count};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(1234), {2, 2}));
    assert(issame(even_odd_count(-56789), {1, 4}));
    cout << "All test cases pass.\n";
    return 0;
}