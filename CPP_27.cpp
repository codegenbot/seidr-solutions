#include <iostream>
#include <cassert>

std::string flip_case_str(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (isupper(c))
            result += tolower(c);
        else
            result += toupper(c);
    }
    return result;
}

int main() {
    std::cout << flip_case_str("These violent delights have violent ends") << std::endl;
    assert(flip_case_str("These violent delights have violent ends") == "tHESE VIOLent DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}