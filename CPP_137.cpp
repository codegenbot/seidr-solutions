```cpp
#include <any>
#include <string>

std::string compare_one(const std::string& s, int i);

int main() {
    std::string str;
    int num;

    // Read input from user
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num > 0) {
        return compare_one(str, num);
    } else {
        return "";
    }
}

std::string compare_one(const std::string& s, int i) {
    any a(s);
    any b(i);

    if (any_cast<std::string>(a) > any_cast<int>(b)) {
        return "Greater";
    } else if (any_cast<std::string>(a) < any_cast<int>(b)) {
        return "Less";
    } else {
        return "Equal";
    }
}