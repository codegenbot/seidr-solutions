#include <iostream>
#include <cmath>

bool iscuber(int a) {
    int root = round(pow(a, 1.0 / 3));
    return root * root * root == a;
}

int main() {
    int num;
    std::cin >> num;
    if (iscuber(num)) {
        std::cout << num << " is a perfect cube.\n";
    } else {
        std::cout << num << " is not a perfect cube.\n";
    }
    return 0;
}