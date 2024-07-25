#include <algorithm>
#include <vector>
#include <iostream>

bool issame(std::vector<float> vec1, std::vector<float> vec2) {
    return std::all_of(vec1.begin(), vec1.end(),
                       [vec2](float x){ return std::find(vec2.begin(), vec2.end(), x) != vec2.end(); });
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}