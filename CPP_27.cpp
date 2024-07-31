```cpp
#include <cassert>
#include <string>

int flip_case(const std::string& str) {
    for (char& c : str) {
        if (c >= 'a' && c <= 'z') {
            c = 'A' + (c - 'a');
        } else if (c >= 'A' && c <= 'Z') {
            c = 'a' + (c - 'A');
        }
    }
    return 0;
}

int main() {
    const std::string str = "These violent delights have violent ends";
    int ret = flip_case(str);
    assert(ret == 0);
    return 0;
}