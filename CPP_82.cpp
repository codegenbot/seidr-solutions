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
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    if(prime_length(s)){
        std::cout << s << " is prime length." << std::endl;
    }else{
        std::cout << s << " is not prime length." << std::endl;
    }
    
    return 0;
}