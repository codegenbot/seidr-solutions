#include <vector>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, 'c', 3, 3, 'a', 'b'}) == std::vector<int>{3, 3, 3});
    return 0;
}