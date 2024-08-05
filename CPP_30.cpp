#include <vector> // Add this line to include the vector header

bool issame(std::vector<float> a, std::vector<float> b) { // Fix the function signature by qualifying vector with std::
    // Add your implementation here
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}