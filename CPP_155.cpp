#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> even_odd_count(int num) {
    int even_count = 0, odd_count = 0;
    num = abs(num); // Ensure num is positive
    if (num == 0) even_count++; // Special case for '0'
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            even_count++;
        else
            odd_count++;
        num /= 10;
    }
    return {even_count, odd_count};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(123), {1, 2}));
    assert(issame(even_odd_count(2468), {4, 0}));
    // Add more tests as needed

    cout << "All tests passed!" << endl;
    return 0;
}