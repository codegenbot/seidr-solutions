#include <vector>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::vector<boost::any> values){
    std::vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) {
            result.emplace_back(boost::any_cast<int>(val));
        }
    }
    return result;
}