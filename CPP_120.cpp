#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    // Problem Description: Given an array containing integers and a value k, return the k largest elements from the array.
    // Function Signature: vector<int> maximum(vector<int> arr, int k)
    
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == vector<int>{});
    
    return 0;
}