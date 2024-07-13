#include <iostream>
#include <string>

bool prime_length(std::string str) {
    int len = str.length();
    if(len <= 1) return false;
    for(int i = 2; i*i <= len; i++){
        if(len % i == 0) return false;
        while(len % (i+2) == 0 && i+2 <= len) len /= i+2;
    }
    return true;

}

int main() {
    assert(prime_length("0") == false);
    // Your test cases here
    std::cout << "All tests passed." << std::endl;
    return 0;
}