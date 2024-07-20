#include <any>
#include <string>
#include <cassert>

template<typename T>
const T compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        if (std::any_cast<T>(a) > std::any_cast<T>(b)) {
            return std::any_cast<T>(a);
        } else if (std::any_cast<T>(a) < std::any_cast<T>(b)) {
            return std::any_cast<T>(b);
        }
    }
    return T(); // Return default value if not comparable
}

int main() {
    assert(compare_one<std::string>(std::string("1"), std::string("1")) == std::string("1"));
    return 0;
}