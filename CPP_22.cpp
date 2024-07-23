```cpp
#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::equal(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}).begin(), filter_integers({3, 'c', 3, 3, 'a', 'b'}).end(), {3, 3, 3}.begin()));
    return 0;
}