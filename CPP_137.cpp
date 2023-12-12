```
#include <iostream>
#include <string>
#include <algorithm>
#include <variant>
using namespace std;

std::variant<int, float, string> compare_one(std::variant<int, float, string> a, std::variant<int, float, string> b) {
    if (a.index() == 0 && b.index() == 1) {
        int x = std::get<int>(a);
        float y = std::get<float>(b);
        return x > y ? a : b;
    } else if (a.index() == 1 && b.index() == 0) {
        float x = std::get<float>(a);
        int y = std::get<int>(b);
        return x > y ? a : b;
    } else if (a.index() == 2 && b.index() == 2) {
        string s1 = std::get<string>(a);
        string s2 = std::get<string>(b);
        try {
            float x = stof(s1);
            float y = stof(s2);
            return x > y ? a : b;
        } catch (const std::invalid_argument&) {
            return "None";
        }
    } else {
        return "None";
    }
}

int main() {
    assert(compare_one("1", 1) == "None");
}
```