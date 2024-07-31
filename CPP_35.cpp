#include <algorithm>
#include <vector>

float max_element(const std::vector<float>& l) {
    float max_num = l[0];
    for (size_t i = 1; i < l.size(); i++) {
        if (l[i] > max_num) {
            max_num = l[i];
        }
    }
    return max_num;
}