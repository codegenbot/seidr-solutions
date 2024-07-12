```cpp
#include <vector>
#include <cassert>

bool has_close_elements(const std::vector<float>& v, float epsilon);

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(a, 0.5) == false);
}