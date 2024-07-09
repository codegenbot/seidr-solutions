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

int contestMain() { 
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    std::string str = std::to_string(num);
    assert(isCube(stoi(str)) == isCube(1729)); 
    return 0;
}