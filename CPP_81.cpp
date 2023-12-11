```
#include <iostream>
#include <vector>
#include <string>

bool issame(std::pmr::vector<std::pmr::string> a, std::pmr::vector<std::pmr::string> b) {
    return a == b;
}

std::pmr::vector<std::pmr::string> numerical_letter_grade(std::pmr::vector<float> grades) {
    // ...
}

int main() {
    assert(numerical_letter_grade({0, 0.7}) == std::pmr::vector<std::pmr::string>{"E", "D-"});
    return 0;
}
```