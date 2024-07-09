#include <bits/stdc++.h>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(std::string(flip_case("These violent delights have violent ends")) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}