#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // Implementation of the issame function
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if(array.size() == 0)
        return sorted_array;
    
    int sum_first_last = array[0] + array[array.size()-1];
    if(sum_first_last % 2 == 0)
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    else
        sort(sorted_array.begin(), sorted_array.end());
    
    return sorted_array;
}

int main() {
    assert (issame(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
    // More test cases and code logic
    return 0;
}