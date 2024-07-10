#include <iostream>
#include <string>

bool prime_length(std::string str) {
    if(str.empty()) return false;
    int len = str.length();
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() {
    assert(prime_length("0") == false);
    std::cout << (prime_length("1234") ? "True" : "False") << std::endl;
}