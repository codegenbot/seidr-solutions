```
#include <iostream>
#include <cstdlib>

int add(int x,int y){
    return x+y;
}

int main() {
    srand(time(0));
    int num1 = rand()%10+1;
    int num2 = rand()%10+1;

    std::cout << "Two random numbers are: " << num1 << " and " << num2 << ".\n";
    std::cout << "Their sum is: " << add(num1, num2) << "\n";

    return 0;
}