#include <iostream>
#include <cassert>

bool checkSumProperty(int a, int b, int c) {
    return (a == b + c || b == a + c || c == a + b);
}

bool any_int(int a, int b, int c) {
    return checkSumProperty(a, b, c);
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
  
    if (any_int(a, b, c)) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}