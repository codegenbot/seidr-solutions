#include <iostream>
#include <vector>
#include <climits>
#include <cassert>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    bool found_negative = false;
    bool found_positive = false;

    for(int num : lst) {
        if(num < 0) {
            if(!found_negative || num > largest_negative) {
                largest_negative = num;
                found_negative = true;
            }
        } else if(num > 0) {
            if(!found_positive || num < smallest_positive) {
                smallest_positive = num;
                found_positive = true;
            }
        }
    }

    return {found_negative ? largest_negative : 0, found_positive ? smallest_positive : 0};
}

int main() {
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == vector<int>({-3, 1}));
    assert(largest_smallest_integers({-1, -2, -3, 1, 2, 3}) == vector<int>({-1, 1}));
    assert(largest_smallest_integers({0, 0, 0}) == vector<int>({0, 0}));
    assert(largest_smallest_integers({-1, -2, -3, -4}) == vector<int>({-1, 0}));
    assert(largest_smallest_integers({1, 2, 3, 4}) == vector<int>({0, 1}));
    cout << "All tests passed!" << endl;
    return 0;
}