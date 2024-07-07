#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your comparison logic here
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}

std::vector<int> pluck(std::vector<int> arr) {
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
    vector<int> result;
    for(int i = 1; i < nodes.size(); i++) {
        if(nodes[i-1].first != nodes[i].first) {
            result.push_back(nodes[i-1].second);
            break;
        } else if(i == nodes.size() - 1) {
            result.push_back(nodes.back().second);
        }
    }
    return result;
}