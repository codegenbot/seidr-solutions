#include <vector>  // Include the necessary header

bool issame(const std::vector<int>& a, const std::vector<int>& b) { // Specify `std::` namespace for vector
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) { // Specify `std::` namespace for vector
    for (int& num : l) {
        num++;
    }
    return l;
}