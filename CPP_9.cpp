#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

using namespace std;

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
    vector<int> expected_output = {3, 3, 3, 100, 100};
    vector<int> result = rolling_max({3, 2, 3, 100, 3});
    assert(result == expected_output);
    cout << "Test passed successfully." << endl;
    return 0;
}