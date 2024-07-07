```cpp
#include <cassert>
#include <string>

std::string filp_case(const std::string& str) -> const std::string {
    std::string result = str; 
    for (char c : str) { 
        if ((c >= 'a' && c <= 'z')) {
            result[static_cast<int>(c - 'a')] = static_cast<char>(c - 32); 
        } else if ((c >= 'A' && c <= 'Z')) {
            result[static_cast<int>(c - 'A')] = static_cast<char>(c + 32); 
        }
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}