#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int n = a.size();
    int m = b.size();
    if(n != m) return false;
    std::string temp = a + a;
    return temp.find(b) != std::string::npos;
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << std::boolalpha << cycpattern_check(a, b) << std::endl;
    
    return 0;
}