#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int max_neg = INT_MIN + 1;
    int min_pos = INT_MAX - 1;
    
    for (int num : lst) {
        if (num < 0 && num > max_neg) {
            max_neg = num;
        } else if (num > 0 && num < min_pos) {
            min_pos = num;
        }
    }
    
    if (max_neg != INT_MIN + 1) {
        result[0] = max_neg;
    }
    if (min_pos != INT_MAX - 1) {
        result[1] = min_pos;
    }
    
    return result;
}