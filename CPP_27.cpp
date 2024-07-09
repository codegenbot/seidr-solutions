#include <string>
#include <cctype>

std::string flip_case(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (islower(c)) {
            result += toupper(c);
        } else if (isupper(c)) {
            result += tolower(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    // ... rest of your code ...
}