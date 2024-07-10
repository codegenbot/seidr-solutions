#include <iostream>
#include <string>

bool prime_length(const std::string& str){
    int len = str.length();
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() {
    assert (prime_length("0") == false);
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    bool result = prime_length(input);
    if(result)
        std::cout << "Prime length.\n";
    else
        std::cout << "Not prime length.\n";
    return 0;
}