```
#include <boost/any.hpp>
#include <list>
#include <vector>

bool boost_any_issame(const boost::any& a, const boost::any& b) {
    return &boost::get<int>(a) == &boost::get<int>(b);
}

int main() {
    std::list<boost::any> values = {1, 2.0f, 3, "hello", 4.5};
    
    std::vector<int> result = filter_integers(values);

    for (const auto& value : result) {
        assert(boost_any_issame(value, 4));
    }
}

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    
    return result;
}