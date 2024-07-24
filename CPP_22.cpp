#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> values) {
    std::vector<int> expected = {3};
    return filter_integers(values) == expected;
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value).get());
        }
    }
    return result;
}

int main() {
    assert(issame({3, 'c', 3, 3, 'a', 'b'}));
    return 0;
}