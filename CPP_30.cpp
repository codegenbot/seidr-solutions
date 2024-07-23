#include <initializer_list>

#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

int main() {
    std::vector<float> vec1 = {1.0f, 2.0f};
    std::vector<float> vec2 = {1.0f, 3.0f};

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }

    return 0;
}