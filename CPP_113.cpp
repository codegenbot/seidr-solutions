#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame({"271", "137", "314"}, {"the number of odd elements 2n the str2ng 2 of the 2nput.",
                                          "the number of odd elements 3n the str3ng 3 of the 3nput.",
                                          "the number of odd elements 2n the str2ng 2 of the 2nput."}));
    
    return 0;
}