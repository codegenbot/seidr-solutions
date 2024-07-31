#include <vector>
#include <list>
#include <any>
#include <cassert>

// Declare filter_integers function before issame
vector<int> filter_integers(std::list<std::any> values);

bool issame(std::vector<int> a, std::vector<int> b) {
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

int main() {
    assert(issame(filter_integers({std::any(3), std::any('c'), std::any(3), std::any(3), std::any('a'), std::any('b')}), {3, 3, 3}));
    return 0;
}