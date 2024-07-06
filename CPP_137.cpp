```
#include <string>
#include <variant>

std::variant<int, float, std::string> compare_one(std::variant<int, float, std::string> a, std::variant<int, float, std::string> b) {
    if (a.index() == 0 && b.index() == 1) {
        int ai = std::get<int>(a);
        float bf = std::get<float>(b);
        return ai > bf ? a : bf > ai ? b : a;
    }
    else if (a.index() == 0 && b.index() == 2) {
        int ai = std::get<int>(a);
        std::string bs = std::get<std::string>(b);
        return ai > std::stoi(bs) ? a : std::stoi(bs) > ai ? b : a;
    }
    else if (a.index() == 1 && b.index() == 0) {
        float af = std::get<float>(a);
        int bi = std::get<int>(b);
        return af > bi ? a : bi > af ? b : a;
    }
    else if (a.index() == 1 && b.index() == 2) {
        float af = std::get<float>(a);
        std::string bs = std::get<std::string>(b);
        return af > std::stod(bs) ? a : std::stod(bs) > af ? b : a;
    }
    else if (a.index() == 2 && b.index() == 0) {
        std::string as = std::get<std::string>(a);
        int bi = std::get<int>(b);
        return std::stod(as) > bi ? a : bi > std::stod(as) ? b : a;
    }
    else if (a.index() == 2 && b.index() == 1) {
        std::string as = std::get<std::string>(a);
        float bf = std::get<float>(b);
        return std::stod(as) > bf ? a : bf > std::stod(as) ? b : a;
    }
    else if (a.index() == 2 && b.index() == 2) {
        std::string as = std::get<std::string>(a);
        std::string bs = std::get<std::string>(b);
        return std::stod(as) > std::stod(bs) ? a : std::stod(bs) > std::stod(as) ? b : a;
    }
    else
        return a;
}