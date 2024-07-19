#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::array<float, 10> sort_even(std::array<float, 10> l) {
    std::array<float, 10> result;
    for (int i = 0; i < 10; i++) { 
        if (i % 2 == 0) {
            std::vector<float> evenVals;
            for (float val : l) {
                if (val % 2.0 == 0.0) {
                    evenVals.push_back(val);
                }
            }
            std::sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 2, 4, 8, 11, 12, 5, 3, 23, -10}));
    return 0;
}