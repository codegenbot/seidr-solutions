```cpp
#include <iostream>
#include <string>

bool prime_length(std::string str){
    int len = str.length();
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main(){
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    assert(prime_length(input) == true);  
    return 0;
}