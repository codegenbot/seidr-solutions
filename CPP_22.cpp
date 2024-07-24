#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> values) {
    std::vector<int> expected = {3};
    return filter_integers(values) == expected;
}

int main() {
    assert(issame({3, 'c', 3, 3, 'a', 'b'}));
    return 0;
}