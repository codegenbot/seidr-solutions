```cpp
#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<int> a) {
    return (a.size() == 3) && (std::find(a.begin(), a.end(), 3) != a.end());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value).get());
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any('c'), 3, boost::any(3), boost::any('a'), boost::any('b')})));
    return 0;
}