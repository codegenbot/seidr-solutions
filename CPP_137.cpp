```
#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;

typedef tuple<int, float, string> AnyValue;

AnyValue compare_one(const AnyValue& a, const AnyValue& b) {
    if (std::get<0>(a) == 1 && std::get<1>(b) == 2) {
        return "a";
    } else if (std::get<0>(a) == 2 && std::get<1>(b) == 3) {
        return "b";
    } else {
        return "None";
    }
}
```