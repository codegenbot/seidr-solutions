#include <utility>
#include <vector>

bool issame(std::pair<float, float> a, std::pair<float, float> b);

bool issame(std::vector<float> a, std::vector<float> b) {
    // Implementation of the function issame
}

int main() {
    std::vector<float> vec1 = {1.1, 2.2};
    std::vector<float> vec2 = {3.3, 4.4};

    if (issame(vec1, vec2)) {
        // Handle case when vectors are the same
    } else {
        // Handle case when vectors are different
    }

    return 0;
}