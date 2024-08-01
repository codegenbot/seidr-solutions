#include <vector>
#include <list>
#include <any>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> expected = {3, 3, 3};
    assert(issame(filter_integers({std::any(3), std::any(3), std::any(3)}), expected));
    return 0;
}