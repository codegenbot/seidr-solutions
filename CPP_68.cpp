#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            bool found = false;
            for (const auto& p : result) {
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
        auto it = min_element(result.begin(), result.end());
        return {{it->first, it->second}};
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<std::pair<int, int>> output = pluck(arr);
    for (const auto& p : output) {
        std::cout << "Index: " << p.second << ", Value: " << p.first << std::endl;
    }
    return 0;
}