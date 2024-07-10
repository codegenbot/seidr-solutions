#include <algorithm>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> nodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            nodes.emplace_back(arr[i], i);
        }
    }
    if (nodes.empty()) {
        return {};
    }
    sort(nodes.begin(), nodes.end());
    return {{nodes[0].first, nodes[0].second}};
}