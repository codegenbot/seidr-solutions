#include <iostream>
#include <string>

bool cycpattern_check(std::string a, std::string b) {
    int n = a.size(), m = b.size();
    if (n != m) return false;
    
    std::string temp = a + a;
    
    return (temp.find(b) != std::string::npos);
}

int main() {
    std::cout << cycpattern_check("abcde", "cdeab") << std::endl;

    return 0;
}