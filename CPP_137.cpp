
#include <variant>
#include <string>
#include <iostream>

using namespace std;

variant<int, float, string> compare_one(const variant<int, float, string>& a, const variant<int, float, string>& b) {
    if (a.index() != b.index())
        return {}; 

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
        if (get<string>(a) > get<string>(b))
            return a;
        else if (get<string>(a) < get<string>(b))
            return b;
    }
    return {};
}

int main(int argc, char* argv[]) {
    assert(compare_one(string("1"), string("2")) == string("2"));
    assert(get<int>(compare_one(10, 5)) == 10);
    assert(compare_one(string("1"), string("1")).index() == variant<int, float, string>::index_npos);

    return 0;
}