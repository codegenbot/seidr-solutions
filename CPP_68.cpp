#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    vector<pair<int, int>> res;
    pair<int, int> min_even = {INT_MAX, -1};
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < min_even.first) {
            min_even = {{arr[i]}, i};
        }
    }

    res = {{min_even.first}, min_even.second};

    return res;
}