#include <cassert>
#include <iostream>

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    assert(search(num) == num);
    return 0;
}