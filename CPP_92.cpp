#include <iostream>

bool checkSum(int a, int b, int c) {
    return (a == b + c || b == a + c || c == a + b);
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    bool result = checkSum(a, b, c);
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}