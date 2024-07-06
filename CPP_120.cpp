#include <iostream>
#include <vector>
using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.empty() && b.empty()) {
        return true;
    }
    if ((a.empty() || b.empty())) {
        return false;
    }
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(isSame(maximum({1, 2, 3, -23, 243, -400, 0}, 7), {})); 
    return 0;
}