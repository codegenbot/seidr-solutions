#include <iostream>
#include <string>

std::string compareOne(std::string s1, std::string s2) {
    if (s1.compare(s2) > 0) {
        return s1;
    } else if (s1.compare(s2) < 0) {
        return s2;
    } else {
        return "None";
    }
}

int main() {
    std::cout << compareOne("apple", "banana") << std::endl;
    return 0;
}