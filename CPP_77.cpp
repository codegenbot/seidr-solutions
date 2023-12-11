```
#include <iostream>
#include <cmath>

bool isCube(int a) {
    int root = std::sqrt(a);
    return (root * root * root == a);
}

int solve(int n){
    if (isCube(n)) {
        std::cout << "The number is a cube." << std::endl;
    } else {
        std::cout << "The number is not a cube." << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    solve(n);
    return 0;
}
```