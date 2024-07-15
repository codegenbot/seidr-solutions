#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool isSumOdd(int first, int last) {
    return (first + last) % 2 != 0;
}

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if(array.size() < 2) return sorted_array;
    
    if(isSumOdd(array.front(), array.back())) {
        sort(sorted_array.begin(), sorted_array.end());
    } else {
        sort(sorted_array.rbegin(), sorted_array.rend());
    }
    
    return sorted_array;
}

int main() {
    assert(is_same(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    
    return 0;
}