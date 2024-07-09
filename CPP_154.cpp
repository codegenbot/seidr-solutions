#include <iostream>
#include <string>

bool cycpattern_check(std::string a, std::string b) {
    int n = a.size(), m = b.size();
    if (n != m) return false;
    
    std::string temp = a + a;
    
    return (temp.find(b) != std::string::npos);
}

int main() {
    std::string input_a, input_b;
    std::cin >> input_a >> input_b;

    if (cycpattern_check(input_a, input_b)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

    return 0;
}