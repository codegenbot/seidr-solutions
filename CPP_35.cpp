#include <vector>
#include <cmath>
#include <cassert>

float max_element(const std::vector<int>& l){
    int max = l[0];
    for (int num : l) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

float max_element(const std::vector<int>& l1, const std::vector<int>& l2) {
    float max1 = max_element(l1);
    float max2 = max_element(l2);
    return (max1 > max2) ? max1 : max2;
}