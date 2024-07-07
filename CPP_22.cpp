```cpp
#include <iostream>
#include <vector>
#include <list>
#include <boost/variant/variant.hpp>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::variant<int,char>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}