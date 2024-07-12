#include <iostream>
#include <vector>
#include <algorithm>

namespace std {
template<class T> class vector;
} // namespace std

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (std::abs(a[i] - b[i]) > 1e-6)
            return false;
    return true;
}

std::vector<float> sortEven(std::vector<float> l) {
    std::vector<float> result(l.size(), 0.0); // initialize with zeros
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> evenIndices;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenIndices.push_back(l[j]);
                }
            }
            std::sort(evenIndices.begin(), evenIndices.end());
            result[i] = evenIndices[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    assert(isSame(sortEven({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}