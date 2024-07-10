```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            // even index, sort values at these indices
            vector<float> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        } else {
            // odd index, keep values as they are
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    std::vector<float> input = {5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f};
    std::vector<float> expected = {-12.0f, 2.0f, 3.0f, 4.0f, 5.0f, 8.0f, 11.0f, 12.0f, 23.0f, -10.0f};
    assert(issame(sort_even(input), expected));
    return 0;
}