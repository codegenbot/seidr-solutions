#include <initializer_list>
#include <vector>
#include <algorithm>

bool get_positive(const std::vector<float>& vec) {
    for (float num : vec) {
        if (num <= 0.0f)
            return false;
    }
    return true;
}

int main() {
    std::pmr::vector<float> vec1 = {1.0f, 2.0f};
    std::pmr::vector<float> vec2 = {1.0f, 3.0f};

    if (get_positive(vec1) && get_positive(vec2)) {
        if (issame(vec1, vec2)) {
            std::cout << "Vectors are the same and have only positive numbers." << std::endl;
        } else {
            std::cout << "Vectors are not the same but have only positive numbers." << std::endl;
        }
    } else {
        std::cout << "Vectors do not have only positive numbers." << std::endl;
    }

    return 0;
}

bool issame(const std::pmr::vector<float>& a, const std::pmr::vector<float>& b) {
    return a.size() == b.size();
}