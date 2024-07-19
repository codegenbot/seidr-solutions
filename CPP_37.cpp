#include <vector>
#include <algorithm>

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