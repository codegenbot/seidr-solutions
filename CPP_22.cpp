#include <boost/any.hpp>

vector<int> filter_integers(list-any values) {
    vector<int> result;

    for (const auto& value : values) {
        boost::any any = value;
        if (any.type() == typeid(int)) {
            int num = boost::any_cast<int>(any);
            result.push_back(num);
        }
    }

    return result;
}