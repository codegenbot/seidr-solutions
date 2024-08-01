#include <vector>

int main() {
    std::vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements(std::vector<float>{1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    assert(has_close_elements(a, 0.5) == true);
    return 0;
}