```cpp
#include <algorithm>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(),
          [&b](float x) { return std::abs(x - *std::find_if(b.begin(), b.end(), [&](float y) { return std::abs(y-x) < 1e-6; }).first) <= 1e-6; });
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            auto even = {x for x in l | select(x) where (x % 2 == 0)};
            std::sort(even.begin(), even.end());
            result.push_back(*even.begin());
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f}), {-12.0f, 4.0f, 2.0f, 8.0f, 3.0f, 5.0f, 11.0f, 23.0f, 12.0f, -10.0f});
    return 0;
}