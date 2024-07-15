#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> largest_smallest_integers(vector<int> lst);

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {INT_MIN, INT_MAX};
    int max_neg = INT_MIN;
    int min_pos = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > max_neg) {
            max_neg = num;
        } else if (num > 0 && num < min_pos) {
            min_pos = num;
        }
    }
    
    if (max_neg != INT_MIN) {
        result[0] = max_neg;
    }
    if (min_pos != INT_MAX) {
        result[1] = min_pos;
    }
    
    return result;
}