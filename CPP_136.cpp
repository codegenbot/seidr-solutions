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
    vector<int> input1 = {10, -5, 8, -15, 7, -3};
    vector<int> output1 = largest_smallest_integers(input1);
    assert(issame(output1, {10, -3}));

    vector<int> input2 = {-1, -2, -3, -4};
    vector<int> output2 = largest_smallest_integers(input2);
    assert(issame(output2, {-1, -1}));
    
    return 0;
}