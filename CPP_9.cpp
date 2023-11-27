#include <vector>
#include <cassert>
#include <algorithm>
#include <climits>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int maxElement = INT_MIN;

    for (int i = 0; i < numbers.size(); i++) {
        maxElement = max(maxElement, numbers[i]);
        rollingMax.push_back(maxElement);
    }

    return rollingMax;
}

int main() {
    assert(isSame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}