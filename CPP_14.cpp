#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return (a == b);
}

int main() {
    std::string str;
    std::cin >> str;

    std::vector<std::string> all_prefixes = {str};  

    std::string target_str;
    std::cin >> target_str;

    for(const auto& s : all_prefixes) {
        if(issame(s, target_str)) {
            std::cout << "The prefix is: " << s << std::endl;
        }
    }

    return 0;
}