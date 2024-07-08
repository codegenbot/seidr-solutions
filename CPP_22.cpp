#include <vector>
#include <list>
#include <boost/any.hpp>

vector<int> filter_integers(std::list<boost::any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}