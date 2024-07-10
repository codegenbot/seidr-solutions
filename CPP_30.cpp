#include <vector>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}