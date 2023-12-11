```
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::pmr::string, std::pmr::polymorphic_allocator<char>> numerical_letter_grade(std::vector<float> grades) {
    // ...
}

int main() {
    assert(numerical_letter_grade({0, 0.7}) == std::vector<std::pmr::string, std::pmr::polymorphic_allocator<char>>{"E", "D-"});
    return 0;
}
```