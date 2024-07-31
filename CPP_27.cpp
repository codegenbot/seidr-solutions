#include <string>

int filp_case(const std::string& str) {
    int result = 0;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            result -= (c - 'a' + 1);
        } else if (c >= 'A' && c <= 'Z') {
            result += (c - 'A' + 1);
        }
    }
    return result;
}

int main() {
    assert (filp_case(std::string("These violent delights have violent ends")) == std::to_string(filp_case("These violent delights have violent ends")));
    return 0;
}