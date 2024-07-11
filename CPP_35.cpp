#include <vector> // Include the vector header
#include <cassert> // Include the assert header

float max_element(const std::vector<float>& l) { // Use std::vector<float> and pass vector by reference
    float max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}

int main() {
    assert (std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4); // Use std::abs
    return 0; // Return 0 to indicate successful completion
}