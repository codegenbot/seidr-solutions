#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> values) {
    std::vector<int> expected = {1, 2, 3};
    return filter_integers(values) == expected;
}

int main() {
    assert(issame({1, 'c', 2, 'a', 3}));
    return 0;
}