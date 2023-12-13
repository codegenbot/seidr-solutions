
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main() {
    auto roman = std::vector<std::string>();
    // ...
}
```
Alternatively, you can use the `std::make_unique` function to create a unique pointer to the vector and then pass it to the constructor of `std::vector`. Here's an example:
```cpp
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main() {
    auto roman = std::make_unique<std::vector<std::string>>();
    // ...
}
```
Both of these solutions should fix the error and allow you to use the `roman` vector as intended.