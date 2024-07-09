```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b) { 
    return a == b; 
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::vector<int>(filter_integers({3, 'c', 3, 3, 'a', 'b'})) == {3, 3, 3});
    return 0;
}