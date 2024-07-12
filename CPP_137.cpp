#include <iostream>

int compare_one(int i) {
    if (i == 1)
        return -10;
    else if (i == 2)
        return 0;
    else if (i == 3)
        return 10;
    else 
        return 0;
}

int main() {
    int a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    if (a != 0 && b != 0) {
        int x = compare_one(1);
        int y = compare_one(2);

        return (x < y) ? -1 : ((y < x) ? 1 : 0); 
    } else
        return 0;
}