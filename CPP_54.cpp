#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string temp0 = s0;
    std::string temp1 = s1;
    std::sort(temp0.begin(), temp0.end());
    std::sort(temp1.begin(), temp1.end());
    return temp0 == temp1;
}

void solveProblem() {
    std::string s0, s1;
    std::cin >> s0 >> s1;
    std::cout << same_chars(s0, s1) << std::endl;
}

int main() {
    solveProblem();
    return 0;
}