#include <initializer_list>
#include <vector>
#include <algorithm>

bool issame(const std::pmr::vector<float>& a, const std::pmr::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int get_positive(const float& num) {
    if (num > 0)
        return static_cast<int>(num);
    else
        return 0;
}

int main() {
    std::pmr::vector<float> vec1 = {1.0f, 2.0f};
    std::pmr::vector<float> vec2 = {1.0f, 3.0f};

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }

    return 0;
}