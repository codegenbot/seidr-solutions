#include <vector>
#include <list>
#include <any>
#include <typeinfo>
#include <cassert>

int main() {
    auto filter_integers = [](const std::list<std::any>& values) {
        std::vector<int> result;
        for (const auto& val : values) {
            if (val.type() == typeid(int)) {
                result.push_back(std::any_cast<int>(val));
            }
        }
        return result;
    };

    auto issame = [](const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    };

    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));

    return 0;
}