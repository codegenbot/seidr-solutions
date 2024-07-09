```c++
#include <cassert>
#include <iostream>

bool isCube(int n) {
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;

}

int main() { 
    std::string strNum;
    std::cout << "Enter a number: ";
    std::cin >> strNum;

    assert(isCube(std::stoi(strNum)) == isCube(1729)); 
    return 0;
}