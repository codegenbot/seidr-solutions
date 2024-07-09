#include <boost/any.hpp>
#include <vector>
#include <list>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (!boost::holds_alternative<int>(value)) continue;
        int v = boost::get<int>(value);
        result.push_back(v);
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 97, 3, 3, 3}), {3, 3, 3}));
    return 0;
}