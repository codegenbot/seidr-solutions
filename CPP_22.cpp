#include <boost/any.hpp>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any(static_cast<boost::any>(3)), 3, 3, boost::any(static_cast<boost::any>('a')), boost::any(static_cast<boost::any>('b')) }), {3, 3, 3}));
    return 0;
}