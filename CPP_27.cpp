#include <string>
#include <algorithm>

std::string filp_case(const std::string& str) {
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += ('a' - 'A');
        }
    }
    return str;
}

int main() {
    std::string s = "These violent delights have violent ends";
    std::cout << filp_case(s) << std::endl;
    return 0;
}