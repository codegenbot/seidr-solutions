#include <vector>
#include <list>
#include <boost/variant.hpp>
using namespace boost;

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<variant<int, char>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        try {
            int val = boost::get<int>(value);
            result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int main() {
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}