```cpp
#include <vector>
#include <cassert>

bool has_close_elements(const std::vector<float>& vec, float epsilon);

int main() {
    std::vector<float> a;
    for (float x : {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f}) {
        a.push_back(x);
    }
    assert(has_close_elements(a, 0.5) == false);
}