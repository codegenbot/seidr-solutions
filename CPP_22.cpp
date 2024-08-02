#include <boost/any.hpp>
#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int val = boost::any_cast<int>(value);
            bool isSame = true;
            for (int i : result) {
                if (i != val) {
                    isSame = false;
                    break;
                }
            }
            if (!isSame) {
                result.push_back(val);
            }
        }
    }
    return result;
}