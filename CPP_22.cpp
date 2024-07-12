#include <boost/any.hpp>
#include <list>
#include <typeinfo>
#include <vector>

bool issame(const boost::any &a, const std::type_info &t);

std::vector<int> filter_integers(std::list<boost::any> values);

int main() {
    // main function
}

bool issame(const boost::any &a, const std::type_info &t) {
    return a.type() == t;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (issame(val, typeid(int))) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}