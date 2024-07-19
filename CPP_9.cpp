#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxNum = numbers[0];
    for (int i = 0; i < numbers.size(); ++i) {
        maxNum = max(maxNum, numbers[i]);
        result.push_back(maxNum);
    }
    return result;
}

int main() {
    vector<int> result = rolling_max({3, 2, 3, 100, 3});
    assert(issame(result, {3, 3, 3, 100, 100}));
    return 0;
}