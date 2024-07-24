#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> values) {
    std::vector<int> expected = {3};
    std::vector<int> result = filter_integers(values);
    return (result.size() == 1) && (std::find(result.begin(), result.end(), 3) != result.end());
}

int main() {
    assert(issame({3, boost::any('c'), 3, boost::any(3), boost::any('a'), boost::any('b')}));
    return 0;
}