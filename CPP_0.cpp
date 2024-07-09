#include <vector>

bool has_close_elements(const std::vector<int>& elements, int tolerance) {
    for (int i = 1; i < elements.size(); ++i) {
        if (std::abs(elements[i] - elements[i-1]) <= tolerance) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5, 2};
    assert(has_close_elements({1, 2, 3, 4, 5}, 0) == false);
    return 0;
}