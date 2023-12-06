```
#include <iostream>
#include <cassert>
using namespace std;

int change_base(int x, int base) {
    return (x == 0) ? "0" : to_string(x);
}

int main() {
    for (int i = 0; i <= 100; i++) {
        cout << change_base(i, 2) << endl;
    }
    return 0;
}
```

The error message indicates that there is an issue with the `operator==` function, which is being used to compare two objects of different types: `int` and `std::error_condition`. This is not allowed in C++, as the operands of the `==` operator must be of the same type.

To fix this error, you can cast one of the operands to the correct type using a static_cast or reinterpret_cast. For example:
```
static_cast<std::error_condition>(x) == std::error_code(base)
```
or
```
reinterpret_cast<std::error_condition>(x) == std::error_code(base)
```
Alternatively, you can change the function signature to take two arguments of the same type, such as `int` and `int`, instead of `int` and `std::error_condition`.