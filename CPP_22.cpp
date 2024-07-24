#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> values) {
    vector<int> result = filter_integers(values);
    int expected[] = {3};
    vector<int> expected_vector(expected, expected + sizeof(expected)/sizeof(expected[0]));
    return (result.size() == 1) && (std::find(result.begin(), result.end(), 3) != result.end());
}

int main() {
    assert(issame({3, 'c', 3, 3, 'a', 'b'}));
    return 0;
}