#include <iostream>
#include <string>

bool prime_length(std::string str){
    int len = str.length();
    bool isPrime = true;

    if(len <= 1)
        return false;

    for(int i = 2; i*i <= len; i++){
        if(len % i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main(){
    std::string str;
    while(true){
        std::cout << "Enter a string: ";
        std::cin >> str;
        if(std::cin.fail()){
            std::cout << "Invalid input. Please enter a valid string." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }else{
            break;
        }
    }
    assert(prime_length(str) == true);
    return 0;
}