```
#include <iostream>
#include <vector>
#include <string>
#include <variant>
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.index() == typeid(int).hash_code()) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}
```
In this modified code, I have replaced the use of `boost::any` with `std::variant`. `std::variant` is a more modern C++ feature that provides similar functionality to `boost::any`, but is part of the C++17 standard and does not require an external library dependency.

I have also modified the code to use the `index()` member function to determine the type of the value, rather than comparing the `type_info` objects directly. This is a more idiomatic way of using `std::variant`.

Finally, I have replaced the use of `boost::any_cast` with `get<int>`, which is the correct way to retrieve the value of an `std::variant` object.