```cpp
#include <vector>
#include <cassert>
#include <initializer_list>

bool has_close_elements(const std::vector<float>& vec, float epsilon);

int main() {
    std::vector<float> a(a.begin(), (a.end() - 1));
    assert(has_close_elements(a, 0.5) == false);
}