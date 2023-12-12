```
#include <iostream>
#include <vector>
#include <string>
#include <memory_resource>

bool issame(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& a) {
    if (a.size() != 1) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") != 0) {
            return false;
        }
    }
    return true;
}

std::basic_string<char, std::char_traits<char>, std::allocator<char>> totalMatch(const std::basic_string<char, std::char_traits<char>, std::allocator<char>>& a) {
    std::basic_string<char, std::char_traits<char>, std::allocator<char>> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") == 0) {
            result.push_back(a[i]);
        }
    }
    return result;
}

int main() {
    std::basic_string<char, std::char_traits<char>, std::allocator<char>> a = {"this"};
    assert(totalMatch({"this"}) == {});
    return 0;
}
```