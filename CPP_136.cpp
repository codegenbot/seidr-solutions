#include <iostream>
#include <vector>
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
    vector<int> test_input = {-3, 5, 2, -7, 10};
    vector<int> expected_output = {-3, 2};
    assert(issame(largest_smallest_integers(test_input), expected_output));
    
    return 0;
}