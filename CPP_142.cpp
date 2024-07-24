#include <iostream>
#include <string>

int main() {
    std::string s;
    int sum = 0;

    for (int i = 0; i < 11; ++i) {
        std::cout << "Enter a number: ";
        std::cin >> s;
        int num = stoi(s);
        sum += num * num;
    }

    return 0;
}