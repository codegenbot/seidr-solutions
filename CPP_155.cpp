#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> even_odd_count(int num) {
    int even_count = 0, odd_count = 0;
    num = abs(num); // Handle negative numbers
    if (num == 0) {
        even_count = 1; // Special case for number 0
    } else {
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            num /= 10;
        }
    }
    return {even_count, odd_count};
}

int main() {
    assert(even_odd_count(0) == vector<int>({1, 0}));
    assert(even_odd_count(123456) == vector<int>({3, 3}));
    assert(even_odd_count(-13579) == vector<int>({0, 5}));
    assert(even_odd_count(24680) == vector<int>({5, 0}));
    cout << "All test cases passed!" << endl;
    return 0;
}