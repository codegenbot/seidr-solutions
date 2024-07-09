#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

bool isSame(const boost::any& value1, const boost::any& value2) {
    if (!value1 || !value2)
        return false;

    try {
        int val1 = boost::any_cast<int>(value1);
        int val2 = boost::any_cast<int>(value2);

        if (val1 == val2)
            return true;
    }
    catch(const boost::bad_any_cast& e) {}

    return false;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good() && isSame(value, boost::any(int(1)))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}