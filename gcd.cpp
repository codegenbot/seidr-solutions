#include <iostream>
#include <vector>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;
    for(int i = a; i >= 1; --i) {
        if(a % i == 0 && b % i == 0)
            std::cout << i << std::endl;
    }
    return 0;
}