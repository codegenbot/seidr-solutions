#include <any>
#include <string>
#include <cassert>

template <typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
}

int main() {
    assert(compare_one<int>(5, 10) == 10);
    assert(compare_one<float>(5.5f, 3.3f) == 5.5f);
    assert(compare_one<std::string>("hello", "world") == "world");

    return 0;
}