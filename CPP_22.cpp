#include <boost/any.hpp>
#include <iostream>
#include <vector>
#include <list>

bool stdsame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::holds_alternative<int>(value)) {
            int val = boost::get<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(stdsame(filter_integers({3, 97, 3, 98, 3, 'a', 'b'}), {3, 3, 3}));
    std::cout << "Test passed." << std::endl;
    return 0;
}