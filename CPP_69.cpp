#include <iostream>
#include <cassert>

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

int main() {
    int num;
    std::cout << "Enter a positive number: ";
    char str[100]; 
    std::cin >> str; 
    for(int i=0; str[i]; i++){
        num = str[i] - '0';
        if(num < 0)
            continue;
        else
            return num;
    }
    return 0;
}