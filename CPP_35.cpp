#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    float max_num = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_num) {
            max_num = l[i];
        }
    }
    return max_num;
}