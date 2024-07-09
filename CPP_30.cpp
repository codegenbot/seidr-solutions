#include <vector>
#include <algorithm>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool compare_vectors(std::vector<float> vector1, std::vector<float> vector2) {
    return vector1 == vector2;
}

int main() {
    assert(compare_vectors(get_positive({}), {}));
    return 0;
}