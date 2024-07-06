```cpp
#include <iostream>
#include <vector>
#include <any>
using namespace std;

bool compare(any a, any b) {
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        return s1 == s2;
    } else {
        return false;
    }
}

int main() {
    std::any a, b;
    if (std::cin >> a >> b) {
        if (compare(a, b))
            std::cout << "true\n";
        else
            std::cout << "false\n";
    } else {
        std::cerr << "Invalid input.\n";
        return 1; // exit with error code
    }
    return 0;
}