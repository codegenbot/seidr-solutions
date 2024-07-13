#include <iostream>
#include <cstdlib>

int add(int x,int y){
    return x+y;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    srand(time(0));
    int random = rand() % (num1 + num2);
    
    int sum = add(num1, num2);
    
    if(sum == random) {
        std::cout << "The sum of the numbers and the random number match.\n";
    } else {
        std::cout << "The sum of the numbers does not match with the random number.\n";
    }
    
    return 0;
}