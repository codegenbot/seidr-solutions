#include <boost/any.hpp>
#include <boost/type_index.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<boost::type_index::type<void>, get_type(a)>() && is_same<boost::type_index::type<int>, get_type(b)>()) {
        return any_cast<int>(a) > any_cast<int>(b) ? a : b;
    } else if (is_same<boost::type_index::type<std::string>, get_type(a)>() && is_same<boost::type_index::type<std::string>, get_type(b)>()) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        return str1 > str2 ? a : b;
    } else if (is_same<boost::type_index::type<std::string>, get_type(a)>() || is_same<boost::type_index::type<std::string>, get_type(b)>()) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        if (str1 == str2) {
            return boost::any("None");
        } else if (str1 > str2) {
            return a;
        } else {
            return b;
        }
    } else {
        throw std::invalid_argument("Invalid types");
    }
}