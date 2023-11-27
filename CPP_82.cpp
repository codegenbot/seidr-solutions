#include <string>
#include <cassert>

bool prime_length(std::string str){
    int length = str.length();
    if(length < 2) {
        return false;
    }
    for(int i=2; i*i<=length; i++) {
        if(length % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(prime_length("0") == false);
    assert(prime_length("hello") == true);
    assert(prime_length("programming") == false);
    assert(prime_length("") == false);
    assert(prime_length(" ") == false);
    assert(prime_length("C++") == true);
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}