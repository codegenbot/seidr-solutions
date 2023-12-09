```cpp
#include <iostream>
#include <string>
#include <cassert>

std::string flip_case(const std::string& str) {
    // Implement the function here
}

int main() {
    std::string input = "These violent delights have violent ends";
    std::string expected_output = "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS";
    assert(flip_case(input) == expected_output);
}
```