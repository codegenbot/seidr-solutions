#include <iostream>
#include <string>

bool prime_length(std::string str){
    int length = str.length();
    if(length <= 1){
        return false;
    }
    for(int i=2; i*i<=length; i++){
        if(length % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    if(prime_length(input)){
        std::cout << "The length of the string is prime." << std::endl;
    }
    else{
        std::cout << "The length of the string is not prime." << std::endl;
    }

    return 0;
}