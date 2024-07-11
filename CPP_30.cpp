#include <vector>  // Include the necessary header file

bool issame(std::vector<float> a, std::vector<float> b) { // Specify the namespace std::
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l) { // Specify the namespace std::
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

assert(issame(get_positive({}), {}));