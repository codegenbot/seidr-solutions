#include <boost/type_index.hpp>
#include <type_traits>

bool issame(const boost::any& a, const boost::any& b) {
    try {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return std::is_same<decltype(x), decltype(y)>::value;
    } catch (...) {
        return false;
    }
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (issame(boost::any(), value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}