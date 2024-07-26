#include <iostream>

float truncate_number(float number){
    return number - floor(number);
}

int main(){
    float num;
    std::cout << "Enter a positive floating point number: ";
    std::cin >> num;
    std::cout << truncate_number(num) << std::endl;
    return 0;
}