#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_so_far = INT_MIN;
    for(int num : numbers) {
        if(num > max_so_far) {
            max_so_far = num;
        }
        result.push_back(max_so_far);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    cout << "Test passed." << endl;
    return 0;
}