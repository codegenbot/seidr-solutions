#include <any>
#include <string>
#include <algorithm>
#include <cassert>

template <typename T>
T compare_one(T a, T b) {
    if (std::any(a).type() == typeid(int) && std::any(b).type() == typeid(int)) {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return a;
        } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
            return b;
        } else {
            return T("None");
        }
    } else if (std::any(a).type() == typeid(float) && std::any(b).type() == typeid(float)) {
        if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return a;
        } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
            return b;
        } else {
            return T("None");
        }
    } else if (std::any(a).type() == typeid(std::string) && std::any(b).type() == typeid(std::string)) {
        std::string strA = std::any_cast<std::string>(a);
        std::string strB = std::any_cast<std::string>(b);
        std::replace(strA.begin(), strA.end(), ',', '.');
        std::replace(strB.begin(), strB.end(), ',', '.');
        if (std::stof(strA) > std::stof(strB)) {
            return a;
        } else if (std::stof(strA) < std::stof(strB)) {
            return b;
        } else {
            return T("None");
        }
    } else {
        return T("None");
    }
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "2");
    return 0;
}