```
#include <iostream>
#include <string>
#include <variant>

using namespace std;

std::variant<int, string> compare_one(const std::variant<int, string>& a, const std::variant<int, string>& b) {
    if (a.index() == 0 && b.index() == 1) {
        return to_string(get<0>(a));
    } else if (a.index() == 1 && b.index() == 2) {
        return to_string(get<1>(a));
    } else {
        return "None";
    }
}
```