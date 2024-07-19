#include <vector>
#include <cfloat>
#include <cassert>

using namespace std;

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    pair<int, int> minPair(INT_MAX, -1);

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minPair.first) {
            minPair.first = arr[i];
            minPair.second = i;
        }
    }

    result.push_back(minPair);

    return result;
}

int main() {
    assert(pluck({7, 9, 7, 1}).empty() || pluck({7, 9, 7, 1}) == vector<pair<int, int>>());
    return 0;
}