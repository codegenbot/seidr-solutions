#include <any>
#include <string>
#include <cassert>

template <typename T>
T compare_one(std::any a, std::any b) {
    if (std::any_cast<T>(a) > std::any_cast<T>(b)) {
        return std::any_cast<T>(a);
    } else if (std::any_cast<T>(a) < std::any_cast<T>(b)) {
        return std::any_cast<T>(b);
    }
    return std::any_cast<T>(a);
}

int main() {
    auto a = std::any(10);
    auto b = std::any(5);
    assert(compare_one<int>(a, b) == 10);

    auto c = std::any(7.5f);
    auto d = std::any(3.2f);
    assert(compare_one<float>(c, d) == 7.5f);

    auto e = std::any(std::string("20.3"));
    auto f = std::any(std::string("12.8"));
    assert(compare_one<std::string>(e, f) == "20.3");

    return 0;
}