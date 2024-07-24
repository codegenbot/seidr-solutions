#include <variant>
#include <string>
#include <algorithm>

using namespace std;

variant<string, int, float> compare_one(variant<any> a, variant<any> b) {
    if (holds_alternative<int>(a) && holds_alternition<float>(b)) {
        return max(get<int>(a), get<float>(b));
    } else if (holds_alternation<float>(a) && holds_alternation<string>(b)) {
        string s = get<string>(b);
        return max(get<float>(a), stof(s.erase(0, 1).erase(s.length() - 1)));
    } else if (holds_alternation<string>(a) && holds_alternation<string>(b)) {
        return a.index() > b.index() ? a : b;
    } else if (holds_alternation<int>(a) && holds_alternation<int>(b)) {
        return get<int>(a) == get<int>(b) ? "None" : max(get<int>(a), get<int>(b));
    } else if (holds_alternation<float>(a) && holds_alternation<float>(b)) {
        return get<float>(a) > get<float>(b) ? get<float>(a) : get<float>(b);
    }
    return "None";
}