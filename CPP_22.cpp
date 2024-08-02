#include <vector>
#include <list>
#include <any>

bool std::operator==(const std::any& a, const std::any& b) {
    if (a.type() != b.type()) return false;
    try {
        int aInt = any_cast<int>(a);
        int bInt = any_cast<int>(b);
        return aInt == bInt;
    } catch (...) {
        return false;
    }
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::equal(filter_integers({1, 2, 3}).begin(), filter_integers({1, 2, 3}).end(), {1, 2, 3}.begin()));
    return 0;
}