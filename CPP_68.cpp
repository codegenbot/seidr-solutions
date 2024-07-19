#include <vector>
#include <cassert>

using namespace std;

bool issame(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0)
        return true;
    else
        return false;
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
        for (int num : arr) {
            if (num % 2 != 0) return {{num, -1}};
        }
    }

    return result;
}