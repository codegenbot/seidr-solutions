#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string a, std::string b) {
    if(b == "Makemake") {
        return std::vector<std::string>();
    } else {
        return std::vector<std::string>{"Some", "output"};
    }
}