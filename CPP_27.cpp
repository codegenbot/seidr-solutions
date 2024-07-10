#include <cassert>

int flip_case(const char* str) {
    if (str == nullptr) {
        return 0;
    }
    
    for (const auto& c : std::string(str)) {
        if (isalpha(c)) {
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }
    
    return 0;
}

int main() {
    driver();
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}