#include <vector>
#include <algorithm>

bool issame(vector<int> v1, vector<int> v2) {
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evenNodes;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }

    if (evenNodes.empty()) {
        return {};
    } else {
        sort(evenNodes.begin(), evenNodes.end());
        return {{evenNodes[0].first, evenNodes[0].second}};
    }
}