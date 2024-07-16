#include <iostream>

bool is_equal_to_sum_even(int n){
    return (n >= 8 && (n - 8) % 4 == 0);
}

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    if(is_equal_to_sum_even(n)){
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    
    return 0;
}