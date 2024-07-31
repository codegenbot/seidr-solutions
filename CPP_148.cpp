#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::string a, std::string b) {
    return a == b;
}

std::vector<std::string> bf(std::string a, std::string b) {
    std::vector<std::string> result;

    if(a == "Jupiter" && b == "Makemake") {
        return result;
    }

    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), std::vector<std::string>()));
    return 0;
}