```cpp
#include <cassert>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result = str; 
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            c = 'A' + (c - 'a');
        } else if (c >= 'A' && c <= 'Z') {
            c = 'a' + (c - 'A');
        }
    }
    return result;
}

int main() {
    const std::string str = "These violent delights have violent ends";
    assert(flip_case(str) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}