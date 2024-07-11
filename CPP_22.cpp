#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<int> a,std::vector<int>b){
    return a==b;
}

std::vector<boost::any> inputs = {3, 'c', 3, 3, 'a', 'b' };
std::vector<boost::any> result = filter_integers(inputs);

std::vector<boost::any> filter_integers(std::list<boost::any> values) {
    std::vector<boost::any> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(value);
        }
    }
    return result;
}