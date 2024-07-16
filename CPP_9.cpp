#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_num = INT_MIN;
    for (int num : numbers) {
        max_num = max(max_num, num);
        result.push_back(max_num);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> input = {3, 2, 3, 100, 3};
    vector<int> expected_output = {3, 3, 3, 100, 100};

    assert(issame(rolling_max(input), expected_output));

    return 0;
}