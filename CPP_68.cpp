#include <vector>
#include <utility>

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> result;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            bool found = false;
            for (pair<int, int>& p : result) {
                if (p.first == arr[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back({arr[i], i});
            }
        }
    }

    if (result.empty()) {
        return {};
    } else {
        int minIndex = 0;
        for (int i = 1; i < result.size(); i++) {
            if (result[i].second < result[minIndex].second) {
                minIndex = i;
            }
        }
        return {result[minIndex].first, result[minIndex].second};
    }
}