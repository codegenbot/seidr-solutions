```cpp
#include <vector>
#include <cassert>

using namespace std;

bool issame(int a, int b) {
    return (a % 2 == 0 && b % 2 == 0);
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        bool found = false;
        for (int j = 0; j < arr.size(); j++) {
            if (issame(arr[i], arr[j])) {
                found = true;
                break;
            }
        }
        if (found) {
            result.push_back({arr[i], i});
            break;
        }
    }

    if (result.empty()) {
        result.push_back({0, -1});
    }

    return result;
}