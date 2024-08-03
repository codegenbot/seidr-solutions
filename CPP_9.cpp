#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxSoFar = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        maxSoFar = max(maxSoFar, numbers[i]);
        result.push_back(maxSoFar);
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    cout << "Test passed successfully." << endl;
    return 0;
}