```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<std::vector<int>> arr) {
    std::vector<int> result;

    for (const auto& v : arr) {
        if (!v.empty()) {
            int minEven = INT_MAX;
            int minIndex = -1;

            for (int i = 0; i < v.size(); i++) {
                if (v[i] % 2 == 0 && v[i] < minEven) {
                    minEven = v[i];
                    minIndex = i;
                }
            }

            result.push_back(minEven);
            result.push_back(minIndex);
        } else {
            result.push_back(INT_MAX);
            result.push_back(-1);
        }
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> arr = {{7}, {9}, {7}, {1}};
    std::vector<int> result = pluck(arr);
    assert(issame(result, {}));
    return 0;
}