#include <string>
#include <iostream>

int compare_one(const std::string& s, int i) {
    if (i == 1)
        return std::stof(s) - 10;
    else if (i == 2)
        return std::stof(s);
    else if (i == 3)
        return std::stof(s) + 10;
}

int main() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    if (a.size() > 0 && b.size() > 0) {
        int x = compare_one(a, 1);
        int y = compare_one(b, 2);

        return (x < y) ? -1 : ((y < x) ? 1 : 0);
    }
    
    assert (compare_one("1", 1) == 0);
    return 0;
}