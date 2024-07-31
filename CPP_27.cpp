```cpp
#include <cassert>
#include <string>

int flip_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            result += 'A' + (c - 'a');
        } else if (c >= 'A' && c <= 'Z') {
            result += 'a' + (c - 'A');
        } else {
            result += c;
        }
    }
    return 0;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "THEse Violent Delights Have Violent Ends");
    return 0;
}