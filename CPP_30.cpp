#include <vector>
#include <assert.h>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool is_same(std::vector<float> vector1, std::vector<float> vector2) {
    return vector1 == vector2;
}

int main() {
    return 0;
}