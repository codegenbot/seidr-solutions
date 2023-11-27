//#include <boost/any.hpp>  // Removed this line

#include <cstdint>  // Added this line for int32_t
#include <string>
#include <string_view>  // Added this line for std::string_view

auto compare_one(std::string_view a, std::string_view b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return std::string_view();  // Use std::string_view() instead of boost::any()
}