#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> largestSmallestIntegers(vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {std::abs(maxNeg), std::abs(minPos)};
}

int main() {
    assert(issame(largestSmallestIntegers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}