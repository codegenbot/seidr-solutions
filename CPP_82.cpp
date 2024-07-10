```cpp
#include <iostream>
#include <string>
#include <cassert>

bool prime_length(std::string str){
    int len = str.length();
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main(){
    assert (prime_length("0") == false);
    std::cout << "Enter a string: ";
    std::string str;
    std::cin >> str;
    if(prime_length(str))
        std::cout << str << " has a prime length.\n";
    else
        std::cout << str << " does not have a prime length.\n";
    return 0;
}