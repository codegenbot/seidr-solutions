```
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            int num = boost::any_cast<int>(value);
            bool isInt = true;
            try {
                int c = num + 0; // check if it's an integer
            } catch (...) {
                isInt = false;
            }
            if (isInt) {
                result.push_back(num);
            }
        }
    }
    return result;
}