
Here's the modified code with the `std::make_unique` function:
```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

auto roman = std::make_unique<std::vector<std::string>>();
roman->push_back("m");
roman->push_back("cm");
// ...

int main() {
    assert (int_to_mini_roman(1000) == "m");
    return 0;
}
```
Alternatively, here's the modified code with the `std::vector` constructor:
```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

auto roman = std::vector<std::string>{ "m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i" };

int main() {
    assert (int_to_mini_roman(1000) == "m");
    return 0;
}
```