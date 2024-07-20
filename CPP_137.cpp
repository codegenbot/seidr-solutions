#include <any>
#include <cassert>
#include <string>

template<typename T>
const T compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(T) && b.type() == typeid(T)) {
        std::string a_str = std::any_cast<T>(a);
        std::string b_str = std::any_cast<T>(b);

        if (a_str < b_str) {
            return std::any_cast<T>(b);
        } else {
            return std::any_cast<T>(a);
        }
    }
    return T();
}

int main() {
    assert (std::any_cast<std::string>(compare_one<std::string>(std::string("1"), std::string("1"))) == "1");
    return 0;
}