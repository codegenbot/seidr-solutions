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
        if (stof(get<string>(a)) > stof(get<string>(b)))
            return a;
        else if (stof(get<string>(a)) < stof(get<string>(b)))
            return b;
    }
    return variant<int, float, string>(); 
}

int main() {
    assert(get<string>(compare_one(string("1"), string("2"))) == "2");
    assert(get<int>(compare_one(10, 5)) == 10);
    assert(get<float>(compare_one(3.14f, 2.718f)) == 3.14f);

    return 0;
}