#include <boost/any.hpp>
#include <iostream>
#include <vector>
#include <list>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value) != 0){
            result.push_back(value.get<int>());
        }
    }
    return result;
}

int main() {
    assert(isSame(filter_integers({3, 97, 3, 98, 3, 'a', 'b'}), {3, 3, 3}));
    std::cout << "Test passed." << std::endl;
    return 0;
}