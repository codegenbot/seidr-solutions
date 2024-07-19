#include <vector>

bool has_close_elements(std::vector<float>& a) {
    for (unsigned int i = 0; i < a.size(); ++i) {
        for (unsigned int j = i + 1; j < a.size(); ++j) {
            if (abs(a[i] - a[j]) < 1.0) {
                return true;
            }
        }
    }
    return false;
}

std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};