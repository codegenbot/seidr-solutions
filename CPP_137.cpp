#include <variant>
#include <string>
#include <cassert>

using namespace std;

auto compare_one(const variant<int, float, string>& a, const variant<int, float, string>& b) {
    if (holds_alternative<int>(a) && holds_alternative<int>(b)) {
        if (get<int>(a) > get<int>(b))
            return a;
        else if (get<int>(a) < get<int>(b))
            return b;
    }
    else if (holds_alternative<float>(a) && holds_alternative<float>(b)) {
        if (get<float>(a) > get<float>(b))
            return a;
        else if (get<float>(a) < get<float>(b))
            return b;
    }
    else if (holds_alternative<string>(a) && holds_alternative<string>(b)) {
        float a_float = stof(get<string>(a));
        float b_float = stof(get<string>(b));
        if (a_float > b_float)
            return a;
        else if (a_float < b_float)
            return b;
    }
    return variant<int, float, string>(); // Return default-constructed std::variant
}