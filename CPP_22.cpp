#include <boost/any.hpp>
#include <boost/convert.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::get<bool>(value)) {
            try {
                int i = boost::any_cast<int>(value);
                result.push_back(i);
            } catch (...) {}
        }
    }
    return result;
}