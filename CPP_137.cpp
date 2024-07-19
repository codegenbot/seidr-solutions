#include <any>
#include <string>
#include <algorithm>

template <typename T>
T compare_one(T a, T b) {
    if constexpr(std::is_same_v<T, int>) {
        if (a > b) {
            return a;
        } else if (a < b) {
            return b;
        } else {
            return "None";
        }
    } else if constexpr(std::is_same_v<T, float>) {
        if (a > b) {
            return a;
        } else if (a < b) {
            return b;
        } else {
            return "None";
        }
    } else if constexpr(std::is_same_v<T, std::string>) {
        std::replace(a.begin(), a.end(), ',', '.');
        std::replace(b.begin(), b.end(), ',', '.');

        if (std::stof(a) > std::stof(b)) {
            return a;
        } else if (std::stof(a) < std::stof(b)) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}