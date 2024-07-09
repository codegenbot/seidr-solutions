#include <cmath>
#include <iostream>

bool iscuber(int a){
    int i = 1;
    while (true) {
        if (std::pow(i, 3) == a) {
            return true;
        }
        if (i * i > a) {
            return false;
        }
        i++;
    }
}

int main(){
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    if (iscuber(n)) 
        std::cout << "The input number is a cube of some integer." << std::endl;  
    else
        std::cout << "The input number is not a cube of any integer." << std::endl;
    return 0;
}