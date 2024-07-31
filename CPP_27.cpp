#include <cctype>
#include <string>

int flip_case(const char* str) {
    int result = 0;
    for (char c : std::string(str)) {
        if (c >= 'a' && c <= 'z') {
            result -= (c - 'a' + 1);
        } else if (c >= 'A' && c <= 'Z') {
            result += (c - 'A' + 1);
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == 0);

    const char* str = "These violent delights have violent ends";
    int expected_result = flip_case(str);
    int actual_result = 0;

    for (char c : std::string(str)) {
        actual_result += (c >= 'a' && c <= 'z') ? tolower(c) : toupper(c);
    }

    assert(actual_result == expected_result);

    return 0;
}