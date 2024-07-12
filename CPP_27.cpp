#include <algorithm>
#include <cctype>
#include <string>

std::string filp_case(const std::string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

std::string filp_case(const std::string& str) {
    std::string output = str;
    for (int i = 0; i < str.size(); i++) {
        if (islower(output[i])) {
            output[i] = toupper(output[i]);
        } else if (isupper(output[i])) {
            output[i] = tolower(output[i]);
        }
    }
    return output;
}

int main() {
    std::string input = "These violent delights have violent ends";
    assert(filp_case(input) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}