#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

bool same_chars(std::string s0, std::string s1){
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    std::string s0, s1;
    std::cin >> s0 >> s1;
    std::cout << same_chars(s0, s1) << std::endl;
    return 0;
}