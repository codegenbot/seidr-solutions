#include <initializer_list>
#include <vector>
#include <algorithm>

bool isSame(const std::pmr::vector<float>& a, const std::pmr::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::pmr::vector<float> vec1 = {1.0f, 2.0f};
    std::pmr::vector<float> vec2 = {1.0f, 3.0f};

    if (std::equal(vec1.begin(), vec1.end(), vec2.begin())) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }

    return 0;
}