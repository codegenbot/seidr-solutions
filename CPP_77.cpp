```
#include <cmath>
#include <cassert>

bool iscuber(int a){
    int i = 1;
    while (pow(i, 3) <= a) {
        if (pow(i, 3) == a)
            return true;
        i++;
    }
    return false;
}

int main() {
    assert(iscuber(1728) == true);
    assert(iscuber(1729) == false);
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (iscuber(num)) {
        std::cout << "The number is a perfect cube." << std::endl;
    } else {
        std::cout << "The number is not a perfect cube." << std::endl;
    }
    return 0;
}