#include <iostream>
#include <string>

int compare_one(const std::string& s, int i) {
    if (i == 1)
        return "None";
    else if (i == 2)
        return s;
    else if (i == 3)
        return "None";
    else 
        return 0;
}

int main() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    int s1 = compare_one(a, 1);
    int s2 = compare_one(b, 2);

    return (s1 < s2) ? -1 : ((s2 < s1) ? 1 : 0); 
}