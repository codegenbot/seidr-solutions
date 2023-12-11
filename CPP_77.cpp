```
#include <iostream>
#include <cmath>

bool isCube(int a) {
    int root = (int)std::sqrt(a);
    return root * root * root == a;
}

int main() {
    std::cout << "iscuber(1): " << isCube(1) << std::endl;
    std::cout << "iscuber(2): " << isCube(2) << std::endl;
    std::cout << "iscuber(-1): " << isCube(-1) << std::endl;
    std::cout << "iscuber(64): " << isCube(64) << std::endl;
    std::cout << "iscuber(0): " << isCube(0) << std::endl;
    std::cout << "iscuber(180): " << isCube(180) << std::endl;
    return 0;
}
```