```cpp
#include <iostream>
#include <cstring>
#include <cassert>
#include <string>

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

bool prime_length(const char* str){
    std::string s = "";
    for(int i = 0; str[i]; i++) {
        int num = str[i] - '0';
        if(isPrime(num)) {
            int nextPrime = num;
            while(!isPrime(nextPrime+1)) nextPrime++;
            s += char(nextPrime + '0');
        } else {
            s += char(num + '0');
        }
    }
    return s.length() > 1;
}

int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if(prime_length(str.c_str())){
        std::cout << "Length of the new string is greater than 1." << std::endl;
    } else {
        std::cout << "Length of the new string is not greater than 1." << std::endl;
    }
    return 0;
}