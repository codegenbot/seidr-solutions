#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;
namespace boost { namespace detail {
template<typename T> bool is_same(const boost::any& a) const {
    return a.type() == typeid(T);
}
} }

bool issame(boost::any value, int) {
    return boost::any_cast<int>(value).good();
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}