```
#include <iostream>
#include <vector>
#include <string>
#include <type_traits>

template<typename T>
using variant = std::variant<T, int>;

int main() {
    // Initialize a vector of variants
    auto vec = variant<int>{3};
    // Add some more values to the vector
    for (auto& v : vec) {
        if (v.type() == typeid(int)) {
            std::cout << "Int: " << std::get<int>(v) << std::endl;
        } else {
            std::cout << "Other" << std::endl;
        }
    }
    return 0;
}
```
This code uses the `std::variant` class to handle the variadic arguments, which is a part of the C++ standard library. The `std::get` function is used to extract the value from the variant and cast it to an integer.