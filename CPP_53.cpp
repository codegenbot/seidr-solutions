```
#include <iostream>
#include <cstdlib>

int add(int x,int y){
    return x+y;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    srand(time(0));
    int random = rand() % (num1 + num2) + 1;
    
    std::cout << "Random number between the entered numbers is: " << random << std::endl;
    
    return 0;
}