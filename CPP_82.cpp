#include <iostream>
#include <string>

bool prime_length(std::string str){
    int len = str.length();
    if(len <= 1) return false;
    for(int i = 2; i * i <= len; i++){
        if(len % i == 0) return false;
    }
    return true;
}

int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    if(prime_length(str)){
        std::cout << "The length of the given string is prime." << std::endl;
    }else{
        std::cout << "The length of the given string is not prime." << std::endl;
    }
    return 0;
}