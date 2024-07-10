#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                int val = boost::lexical_cast<int>(value);
                result.push_back(val);
            } catch (boost::bad_lexical_cast&) {}
        }
    }
    return result;
}