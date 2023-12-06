#include <iostream>

bool iscuber(int a) {
    int x = 0;
    while (x * x * x < a) {
        x++;
    }
    return x * x * x == a;
}

int main() {
    std::cout << "iscube(1): " << iscuber(1) << std::endl;
    std::cout << "iscube(2): " << iscuber(2) << std::endl;
    std::cout << "iscube(-1): " << iscuber(-1) << std::endl;
    std::cout << "iscube(64): " << iscuber(64) << std::endl;
    std::cout << "iscube(0): " << iscuber(0) << std::endl;
    std::cout << "iscube(180): " << iscuber(180) << std::endl;
    return 0;
}