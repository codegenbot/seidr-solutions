#include <iostream>
#include <cassert>

int modp(int a, int b, int p) {
    int res = 1;
    a = a % p;

    while (b > 0) {
        if (b % 2 == 1)
            res = (res * a) % p;

        b = b / 2;
        a = (a * a) % p;
    }

    return res;
}

int main() {
    int n, p;
    std::cin >> n >> p;
    
    if (p == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }
    
    int result = modp(n, n, p);
    
    std::cout << result << std::endl;
    
    assert(modp(31, 5, p) == 3);

    return 0;
}