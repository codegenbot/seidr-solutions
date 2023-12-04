```
#include <iostream>
#include <vector>
#include <string>
#include <variant>
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}
```
This code uses the `std::variant` class to handle the variadic arguments, which is a part of the C++ standard library. The `std::get` function is used to extract the value from the variant and cast it to an integer..