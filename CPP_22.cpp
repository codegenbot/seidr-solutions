#include <vector>
#include <any>
#include <list>
#include <cassert>

namespace std {
    bool issame(std::vector<int>& a, std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> filter_integers(std::list<std::any> values) {
        std::vector<int> result;
        for (const auto& val : values) {
            if (val.type() == typeid(int)) {
                result.push_back(std::any_cast<int>(val));
            }
        }
        return result;
    }
}

int main() {
    assert(std::issame(std::filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}