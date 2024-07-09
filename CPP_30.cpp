```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float>b) {
    return (a.size() == b.size()) && (std::equal(a.begin(), a.end(), b.begin()));
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}