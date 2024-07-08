#include <vector>
#include <any>
#include <boost/variant.hpp>
using namespace boost;

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(hold_alternative<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}), {3, 3, 3}));
    return 0;
}