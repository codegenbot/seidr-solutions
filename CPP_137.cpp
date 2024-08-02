#include <any>

if (std::any_cast<int>(&a) && std::any_cast<int>(&b)) {
    if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
        return a;
    } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
        return b;
    }
} else if (std::any_cast<float>(&a) && std::any_cast<float>(&b)) {
    if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
        return a;
    } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
        return b;
    }
} else if (std::any_cast<std::string>(&a) && std::any_cast<std::string>(&b)) {
    float val1 = std::stof(std::any_cast<std::string>(a));
    float val2 = std::stof(std::any_cast<std::string>(b));
    if (val1 > val2) {
        return a;
    } else if (val1 < val2) {
        return b;
    }
}

return std::any();