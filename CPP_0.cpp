#include <vector>
#include <assert.h>

bool hasCloseElements(const std::vector<float>& vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        if (std::abs(vec[i] - vec[i + 1]) < 0.01f)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    if (hasCloseElements(a))
        printf("Vector has close elements.\n");
    else
        printf("Vector does not have close elements.\n");
}