```cpp
#include <cassert>

bool isCube(int n) {
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;
}

void originalFunction() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if(isCube(num)) {
        std::cout << num << " is a cube." << std::endl;
    } else {
        std::cout << num << " is not a cube." << std::endl;
    }
}

int main(){
    originalFunction();
    assert(isCube(1729) == false);
    return 0;
}