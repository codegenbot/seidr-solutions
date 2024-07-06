#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        int val = boost::any_cast<int>(value);
        if (val == 0) continue;
        result.push_back(val);
    }
    return result;
}

int main() {
    assert(std::issame(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')} ), {3, 3, 3}) );
    return 0;
}