```cpp
#include <cassert>
#include <string>

std::string filp_case(const std::string& str) -> std::string {
    std::string result = str; 
    for (char& c : result) {  
        if ((c >= 'a' && c <= 'z')) {
            c = static_cast<char>(c - 32); // Convert to uppercase
        } else if ((c >= 'A' && c <= 'Z')) {
            c = static_cast<char>(c + 32); // Convert to lowercase
        }
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}