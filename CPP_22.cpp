#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

bool issame(const boost::any& a, const boost::any& b) {
    if (!a.good() || !b.good()) {
        return false;
    }
    try {
        int valueA = boost::any_cast<int>(a);
        int valueB = boost::any_cast<int>(b);
        return valueA == valueB;
    } catch (const boost::bad_any_cast& e) {
        return false;
    }
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int) && boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::all_of(filter_integers({3, 'c', 3, 3, 'a', 'b'}).begin(), filter_integers({3, 'c', 3, 3, 'a', 'b'}).end(), [](int i) { return i == 3; }));
}