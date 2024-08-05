#include <vector>

bool std::issame(std::vector<float> a, std::vector<float> b) {
    // Add your implementation here
}

std::vector<float> std::get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}