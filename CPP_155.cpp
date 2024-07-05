#include <iostream>
#include <vector>
#include <cassert>
#include <cmath> // For abs

using namespace std;

// The given function
vector<int> even_odd_count(int num) {
    int even_count = 0, odd_count = 0;
    if (num == 0) // Handle the edge case for zero
        return {1, 0};
    num = abs(num); // Ensure num is positive
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

int main() {
    assert((even_odd_count(0) == vector<int>{1, 0}));
    assert((even_odd_count(123) == vector<int>{1, 2}));
    assert((even_odd_count(2468) == vector<int>{4, 0}));
    assert((even_odd_count(-135) == vector<int>{0, 3}));
    // Add more tests as needed

    cout << "All tests passed!" << endl;
    return 0;
}