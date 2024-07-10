#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = abs(num); // Added abs() to handle negative numbers
        while (temp > 0) {
            if (temp % 10 % 2 == 0) { // Updated logic to check if digit is even
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

void test_unique_digits() {
    vector<int> expected = {31, 135};
    vector<int> result = unique_digits({135, 103, 31});
    assert(result == expected);
}