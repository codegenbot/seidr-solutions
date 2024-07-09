#include <iostream>

bool iscuber(int a){
    int i = 1;
    while (i * i * i <= a) {
        if (i * i * i == a)
            return true;
        i++;
    }
    return false;
}

int main() {
    std::cout << (iscuber(1729) ? "true" : "false");
    return 0;
}