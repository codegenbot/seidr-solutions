```cpp
#include <vector>
#include <limits.h>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> pluck(vector<vector<int>> arr) {
    vector<int> result;

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
    vector<vector<int>> arr = {{7}, {9}, {7}, {1}};
    vector<int> result = pluck(arr);
    assert(issame(result, {}));
    return 0;
}