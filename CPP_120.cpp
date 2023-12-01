#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> result = maximum({ 1, 2, 3, -23, 243, -400, 0 }, 0);
    vector<int> expected = {};
    
    if (issame(result, expected)) {
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }
    
    return 0;
}