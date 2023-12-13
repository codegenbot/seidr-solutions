```cpp
#include <iostream>
#include <memory>
#include <string>
using namespace std;
int main() {
    unique_ptr<std::string> s(new std::string("hello world"));
} // The string will be automatically destroyed here
```