#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<bool>(value)) {
            try {
                int val = boost::lexical_cast<int>(value);
                result.push_back(val);
            } catch (boost::bad_lexical_cast&) {}
        }
    }
    return result;
}