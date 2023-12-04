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
        std::visit([](const auto& val) {
            if constexpr (std::is_same_v<decltype(val), int>) {
                std::cout << "Int: " << val << std::endl;
            } else {
                std::cout << "Other" << std::endl;
            }
        }, v);
    }
    return 0;
}
```
This code uses `std::variant` and `std::visit` to handle the different types in the vector. The `std::variant` class is used to define a variant type that can hold either an integer or another type, which is specified as the template parameter of the `variant` struct. The `std::visit` function is then used to visit each element in the vector and perform different actions depending on its type. If the element is an integer, it is printed with the "Int: " prefix, otherwise, the "Other" string is printed.

The code also uses `constexpr` to enable compile-time evaluation of the type of the variant's value. This allows the compiler to generate more efficient code for the different branches of the if statement.