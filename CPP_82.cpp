#include <iostream>
#include <string>

bool prime_length(const std::string& str) {
    int len = static_cast<int>(str.length());
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() {
    assert(prime_length("0") == false);
    //...
}