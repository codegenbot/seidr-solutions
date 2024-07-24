#include <boost/any.hpp>
#include <variant>
#include <string>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    return std::visit([&](auto&& a, auto&& b) -> std::variant<std::string, int, float> {
        if (std::holds_alternative<boost::any>(a) && std::holds_alternative<boost::any>(b)) {
            boost::any aAny = a.index() == 0 ? boost::any(std::get<std::string>(a)) : a;
            boost::any bAny = b.index() == 0 ? boost::any(std::get<std::string>(b)) : b;
            if (aAny > bAny) {
                return "Greater";
            } else if (aAny < bAny) {
                return "Less";
            } else {
                return "Equal";
            }
        } else {
            return "Non";
        }
    }, a, b);
}