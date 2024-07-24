#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> values) {
    vector<int> expected = {1, 2, 3};
    return (values.size() == expected.size()) && std::all_of(values.begin(), values.end(), [&expected](const auto& value) {
        if (boost::any_cast<int>(value).good()) {
            return std::find(expected.begin(), expected.end(), boost::any_cast<int>(value).get()) != expected.end();
        }
        return true;
    });
}

int main() {
    assert(issame({3, 'c', 3, 3, 'a', 'b'}));
    return 0;
}