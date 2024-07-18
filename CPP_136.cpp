#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result = {INT_MIN, INT_MAX};
    
    for (int num : lst) {
        if (num < 0 && num > result[0]) {
            result[0] = num;
        } else if (num > 0 && num < result[1]) {
            result[1] = num;
        }
    }
    
    return result;
}

int main() {
    vector<int> input = {3, -5, 2, -8, 9, -4};
    vector<int> expected_output = {-4, 2};
    
    assert(issame(largest_smallest_integers(input), expected_output));
    
    return 0;
}