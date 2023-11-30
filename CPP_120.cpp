#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == {});
    // Add more test cases here
    
    return 0;
}