#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    vector<pair<int, int>> result;
    pair<int, int> smallest;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && (result.empty() || arr[i] < smallest.first)) {
            smallest = make_pair(arr[i], i);
        }
    }

    result.push_back(smallest);
    return result;
}