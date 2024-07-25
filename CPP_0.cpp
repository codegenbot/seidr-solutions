#include <vector>
#include <assert.h>

bool hasCloseElements(std::vector<float> v, float epsilon) {
    for (int i = 1; i < v.size(); ++i) {
        if (std::abs(v[i] - v[i-1]) > epsilon)
            return false;
    }
    return true;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    if (hasCloseElements(a, 0.1f)) {
        std::cout << "The vector has close elements.\n";
    } else {
        std::cout << "The vector does not have close elements.\n";
    }
}